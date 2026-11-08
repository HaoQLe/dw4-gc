// beNDMWGameRam: The player technique database, loaded on first use (0x80378424..0x803784D0), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
beDataBase *fn_80378424(beNDMWGameRam *self) { return database(self, self->_dBPcTech, "pcTech"); }
}
