// Gap::Bec::beNDMWMdlItem: dropped items. An item is created from its database category (disks, instant
// items, important items, ability chips, weapons and armour scaled by player 1's level). An unnamed item is
// used up when a player touches it; a named one shows its name to the nearest player, who picks it up with
// ACTION1 when there is room. This file: the kind test, the RAM start, the managers and the label slots
// (0x803AAA8C..0x803AAC90).
#include "beNDMWMdlItem.h"

#pragma auto_inline off

extern "C" {


// Takes the models of kind KIND_ITEM.
unsigned char beNDMWMdlItem_virtual94(beNDMWMdlItem *, const char *kind) { return strcmp(kind, lbl_8045C3F8) == 0; }

// Registers the RAM for the DROPITEM messages.
void beNDMWMdlItem_virtual9C(beNDMWMdlItem *self, beBaseInfoRam *ram) { fn_80305308(self->_messenger, ram, lbl_8045C404); }

// Finds the viewer's scene info manager.
void beNDMWMdlItem_virtual64(beNDMWMdlItem *self)
{
    fn_802F24B0(self);
    self->_viewerSIManager = static_cast<igViewerSceneInfoManager *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(igViewerSceneInfoManager_meta)));
}

// Releases the RAMs that hold a player's name label.
void beNDMWMdlItem_virtual88(beNDMWMdlItem *self) { removeAll(self->_lockRamList); }

}
