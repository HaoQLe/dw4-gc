// beNDMWGameRam: The enemy attack database, loaded on first use (0x80378290..0x8037833C), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
beDataBase *fn_80378290(beNDMWGameRam *self) { return database(self, self->_dBEneatk, "eneatk"); }
}
