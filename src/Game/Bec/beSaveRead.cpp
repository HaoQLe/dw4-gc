// beSvReadMediaApi: loads the save (0x80321584..0x80321C68). Both copies are read; the first whose checksum
// matches is copied to the request's game data. This file: the start (0x80321584..0x80321670).
#include "beSave.h"
#include <meta/beSvReadMediaApi.h>
#include <meta/igObjectList.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

// The copy being read (the class's unnamed member at 0xE8).
static inline int &copyIndex(beSvReadMediaApi *self) { return *reinterpret_cast<int *>(self->unknownE8); }

// Read buffer index (one per copy).
static inline beSaveMemoryObj *readBuffer(beSvReadMediaApi *self, int index) { return item<beSaveMemoryObj>(self->_loadWorkList, index); }

extern "C" {

void beSvReadMediaApi_virtual5C(beSvReadMediaApi *self, beSvDeliver *request)
{
    beSvPlatBaseData *plat = request->_platformData;
    self->_connect = request->_targetConnect;
    self->_isEnd = false;
    self->_gameData = request->_gameData;
    self->_result = 1;
    lbl_80535C18[0] = static_cast<beSvPlatDataGC *>(request->_platformData);
    for (int i = 0; i < 2; i++) {
        Ref<beSaveMemoryObj> buffer(beSaveMemoryObj_create(poolFor(self, lbl_8056225C)), Ref<beSaveMemoryObj>::adopt);
        fn_8031F9FC(buffer, plat->_dataSize, 32);
        fn_80069128(self->_loadWorkList, buffer);
    }
}

}
