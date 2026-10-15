// Gap::Bec::beTimer: count-down timers that run a Lua file when they expire (0x8031B60C..0x8031B9FC).
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
extern char beSystem_meta[];          // beSystem's metaobject pointer
extern char bePadManager_meta[];          // bePadManager's metaobject pointer
extern char beLua_meta[];          // beLua's metaobject pointer
extern char beTimer_meta[];          // beTimer's metaobject pointer
bePadData *bePadManager_getPad(bePadManager *manager, int player);
bool fn_80316808(beSystem *system);  // _isActive && !_isFirstTime
void fn_80301FA4(beLua *lua, const char *file, int);   // runs a Lua file
int strcmp(const char *, const char *);
}

extern "C" {

void beTimer_virtual5C(beTimer *) {}

void beTimer_virtual60(beTimer *) {}

// Finds the system, the pad manager and Lua.
void beTimer_virtual64(beTimer *self)
{
    self->_system = static_cast<beSystem *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beSystem_meta)));
    self->_padManager = static_cast<bePadManager *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(bePadManager_meta)));
    self->_luaManager = static_cast<beLua *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beLua_meta)));
}

void beTimer_virtual68(beTimer *) {}

int beTimer_virtual6C(beTimer *) { return 0; }

// Removes every timer.
void beTimer_virtual70(beTimer *self)
{
    removeAll(self->_dataList);
}

// Whether any of pads 0..3 has a stick direction or a button held.
// Kept out of line: the original calls it from virtual74.
#pragma push
#pragma auto_inline off
bool beTimer_anyPadInput(beTimer *self)
{
    for (int i = 0; i < 4; i++) {
        bePadData *pad = bePadManager_getPad(self->_padManager, i);
        if (pad->_lStk != 0) return true;
        if (pad->_button != 0) return true;
    }
    return false;
}
#pragma pop

// Each frame while the system runs: counts every timer down by the elapsed world time; an expired
// timer runs its Lua file and is removed.
void beTimer_virtual74(beTimer *self)
{
    beTimerDataList *list;
    if (self->_dataList->_count == 0) return;
    long long now = self->_insight->_worldTime;
    long long elapsed = now - self->_oldWorldTime;
    self->_oldWorldTime = now;
    if (!fn_80316808(self->_system)) return;
    int count = self->_dataList->_count;
    for (int i = 0; count > i; i++) {
        beTimerData *data = item<beTimerData>(self->_dataList, i);
        if (data->_resetCondition) {
            bool reset = false;
            if (strcmp(data->_resetCondition, "NOPADDATA") == 0) {
                if (beTimer_anyPadInput(self)) reset = true;
            }
            if (reset) data->_downTimer = data->_startTime;
        }
        long long left = data->_downTimer - elapsed;
        data->_downTimer = left;
        if (left < 0) {
            fn_80301FA4(self->_luaManager, data->_callLuaFile, 0);
            list = self->_dataList;
            igObject *expired = item<igObject>(list, i);
            if (expired) release(expired);
            fn_80041C10(list, i);
            static_cast<igObject **>(list->_data)[list->_count] = 0;
            count--;
            i--;
        }
    }
}

// The class's metaobject.
void *beTimer_virtual58(beTimer *)
{
    return *reinterpret_cast<void **>(beTimer_meta);
}

}
