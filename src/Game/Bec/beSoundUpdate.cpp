// Gap::Bec::beSound: its setup and per-frame update.
#include "beSound.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Setup in two steps: first the sound infos (all but "_common") lose their data and the reverb is set; then,
// every frame, the effects whose time has passed leave the list.
void beSound_virtual84(beSound *self, beBaseInfoRam *ram)
{
    switch (ram->_st0) {
    case 0:
        fn_80305F58(self->_messenger, "STATICINFO", "GETINFOLIST");
        if (fn_80306E1C(self->_messenger) >= 1) {
            igObjectList *infos = fn_80306FB4(self->_messenger, 0);
            for (int i = 0; i < infos->_count;) {
                beBaseInfo *info = item<beBaseInfo>(infos, i);
                if (!nameOf(info)) {
                    i++;
                    continue;
                }
                if (strcmp(nameOf(info), "_common") == 0) {
                    i++;
                    continue;
                }
                removeAll(reinterpret_cast<igObjectList *>(info->_dataList));
                if (info->_dataList->_count <= 0) fn_8004155C(info->_dataList, 0, 4);
                igObject *object = item<igObject>(infos, i);
                if (object) release(object);
                fn_80041C10(infos, i);
                static_cast<igObject **>(infos->_data)[infos->_count] = 0;
            }
        }
        fn_802F6F10(self->_cri, "REVERB");
        ram->_st0++;
        ram->_st3 = 0;
        ram->_st2 = 0;
        ram->_st1 = 0;
    case 1: {
        long long now = self->_insight->_worldTime;
        for (int i = 0; i < self->_playSEs->_count; i++) {
            bePlaySE *effect = item<bePlaySE>(self->_playSEs, i);
            if (effect->_time < now) {
                fn_800692E0(self->_playSEs, effect, 0);
                i--;
            }
        }
        break;
    }
    }
}

}
