// beSaveUtil: the class of its info and its registration for messages (0x80323CE4..0x80323D20).
#include "beSave.h"
#include <meta/beSaveUtil.h>
#include <meta/beBaseInfoRam.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
extern char beSaveUtilInfo_meta[];
extern char lbl_80452EB0[];   // "SAVEUTILITY"
void fn_80305308(void *messenger, beBaseInfoRam *ram, const char *name);   // registers for messages to name
}

extern "C" {

void *beSaveUtil_virtual80(beSaveUtil *) { return *reinterpret_cast<void **>(beSaveUtilInfo_meta); }

void beSaveUtil_virtual7C(beSaveUtil *self, beBaseInfoRam *ram) { fn_80305308(self->_messenger, ram, lbl_80452EB0); }

}
