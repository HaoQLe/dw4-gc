// Gap::Bec::beTimer: count-down timers that run a Lua file when they expire (0x8031B60C..0x8031B864).
// The per-frame update (beTimer_virtual74, 0x8031B864) and beTimer_virtual58 still come from their original
// objects; see docs/research/2026-10-09-small-game-classes.md.
// A timer whose reset condition is "NOPADDATA" restarts whenever a pad is in use, so it measures idle time.
#include <meta/beTimer.h>
#include <meta/beTimerData.h>
#include <meta/beTimerDataList.h>
#include <meta/beSystem.h>
#include <meta/bePadManager.h>
#include <meta/bePadData.h>
#include <meta/igInsightCore.h>
#include <meta/beLua.h>
#include <game/List.h>

using namespace Meta;

extern "C" {
igObject *fn_8028A730(igInsightCore *insight, void *meta);   // the manager of a class
extern char lbl_805346A8[];          // beSystem's metaobject pointer
extern char lbl_80534AAC[];          // bePadManager's metaobject pointer
extern char lbl_80535124[];          // beLua's metaobject pointer
bePadData *bePadManager_getPad(bePadManager *manager, int player);
}

extern "C" {

void beTimer_virtual5C(beTimer *) {}

void beTimer_virtual60(beTimer *) {}

// Finds the system, the pad manager and Lua.
void beTimer_virtual64(beTimer *self)
{
    self->_system = static_cast<beSystem *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(lbl_805346A8)));
    self->_padManager = static_cast<bePadManager *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(lbl_80534AAC)));
    self->_luaManager = static_cast<beLua *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(lbl_80535124)));
}

void beTimer_virtual68(beTimer *) {}

int beTimer_virtual6C(beTimer *) { return 0; }

// Removes every timer.
void beTimer_virtual70(beTimer *self)
{
    removeAll(self->_dataList);
}

// Whether any of pads 0..3 has a stick direction or a button held.
bool beTimer_anyPadInput(beTimer *self)
{
    for (int i = 0; i < 4; i++) {
        bePadData *pad = bePadManager_getPad(self->_padManager, i);
        if (pad->_lStk != 0) return true;
        if (pad->_button != 0) return true;
    }
    return false;
}

}
