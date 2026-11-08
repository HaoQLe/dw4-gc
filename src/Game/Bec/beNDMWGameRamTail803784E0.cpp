// beNDMWGameRam: The enemy database, loaded on first use (0x803784E0..0x8037858C), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
beDataBase *fn_803784E0(beNDMWGameRam *self) { return database(self, self->_dBEnemy, "enemy"); }
}
