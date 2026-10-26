// Gap::Bec::beNDMWMdlPlayer: the players' models. Each frame a player turns with the left stick (relative to
// the camera) and acts on the pad's buttons: jump, guard, the body attack (a stick flick repeated within
// bodyAttackTime), the attacks (a full turn of the stick makes the second attack), the item, technique and
// status panels and the status window. Its work links the player's HP and MP from the game RAM and keeps the
// status panel's meters. This file: the managers, the kind test and the RAM start (0x8034C2F0..0x8034C3C8).
#include "beNDMWMdlPlayer.h"

#pragma auto_inline off

extern "C" {

// Finds the game RAM, the pad manager and the viewer's scene info manager.
void beNDMWMdlPlayer_virtual64(beNDMWMdlPlayer *self)
{
    fn_802F24B0(self);
    self->_gameRam = static_cast<beNDMWGameRam *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beNDMWGameRam_meta)));
    self->_padManager = static_cast<bePadManager *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(bePadManager_meta)));
    self->_viewerSIManager = static_cast<igViewerSceneInfoManager *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(igViewerSceneInfoManager_meta)));
}

// Takes the models of kind KIND_PLAYER.
unsigned char beNDMWMdlPlayer_virtual94(beNDMWMdlPlayer *, const char *kind) { return strcmp(kind, lbl_80456EA0.KIND_PLAYER) == 0; }

// Registers the RAM for the PLAYER messages.
void beNDMWMdlPlayer_virtual9C(beNDMWMdlPlayer *self, beBaseInfoRam *ram) { fn_80305308(self->_messenger, ram, lbl_80456EAC); }

}
