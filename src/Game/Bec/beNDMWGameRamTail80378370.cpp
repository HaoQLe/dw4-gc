// beNDMWGameRam: The evolution and player technique databases, loaded on first use (0x80378370..0x8037841C), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
beDataBase *fn_80378370(beNDMWGameRam *self) { return database(self, self->_dBShinka, "shinka"); }
beDataBase *fn_80378424(beNDMWGameRam *self);
}
