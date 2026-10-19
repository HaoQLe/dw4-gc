// beSvConnectCheck: which card slots hold a usable card (0x803225FC..0x80322848).
#include "beSave.h"
#include <meta/beSvConnectCheck.h>
#include <meta/igIntList.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

// A connection check with its per-slot results (the class's unnamed members from 0xD4).
struct ConnectSlots {
    unsigned char head[0xD4];
    int state[2];      // 0xD4: 1 a card is ready, -1 a wrong device, 0 nothing usable
    int freeSize[2];   // 0xDC
    int freeFile[2];   // 0xE4
    int format[2];     // 0xEC
};
static inline ConnectSlots *slotsOf(beSvConnectCheck *self) { return reinterpret_cast<ConnectSlots *>(self); }

extern "C" {
extern int lbl_804E0A18[];   // [0]: the value the slot lists are reset to (0)
}

// Resets every element of an int list to the reset value.
static inline void resetList(igIntList *list)
{
    int *values = static_cast<int *>(list->_data);
    int size = list->_count;
    for (int i = 0; i < size; i++) values[i] = lbl_804E0A18[0];
}

// Sets an element of an int list when the index is in range.
static inline void setItem(igIntList *list, int index, const int &value)
{
    if (list->_count != 0 && index >= 0 && index < list->_count) static_cast<int *>(list->_data)[index] = value;
}

extern "C" {

// Probes both slots.
void fn_803225FC(beSvConnectCheck *self)
{
    for (int slot = 0; slot < 2; slot++) {
        s32 memSize;
        s32 sectorSize;
        switch (CARDProbeEx(slot, &memSize, &sectorSize)) {
        case CARD_RESULT_READY:
            slotsOf(self)->state[slot] = 1;
            break;
        case CARD_RESULT_WRONGDEVICE:
            slotsOf(self)->state[slot] = -1;
            break;
        case CARD_RESULT_BUSY:
        default:
            slotsOf(self)->state[slot] = 0;
            break;
        }
    }
}

// Copies the slot results into the request's lists; returns the number of slots with a usable card.
int fn_80322688(beSvConnectCheck *self, beSvDeliver *request)
{
    igIntList *connected = request->_actConnect;
    igIntList *freeFiles = request->_freeFileList;
    igIntList *freeSizes = request->_freeSizeList;
    igIntList *formats = request->_formatList;
    int count = 0;
    resetList(connected);
    for (int i = 0; i < connected->_count; i++) {
        setItem(connected, i, slotsOf(self)->state[i]);
        if (slotsOf(self)->state[i] == 1) {
            setItem(freeFiles, i, slotsOf(self)->freeFile[i]);
            setItem(freeSizes, i, slotsOf(self)->freeSize[i]);
            setItem(formats, i, slotsOf(self)->format[i]);
            count++;
        }
    }
    return count;
}

}
