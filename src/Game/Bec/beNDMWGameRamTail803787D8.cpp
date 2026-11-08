// beNDMWGameRam: Out-of-line copy of a player's data list (an element of the per-player lists) (0x803787D8..0x803787E8), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
beDataObjList *fn_803787D8(beDataObjListList *lists, int player) { return item<beDataObjList>(lists, player); }
}
