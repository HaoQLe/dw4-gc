// Gap::Bec::beCri: the sound-file volume and buffer pool.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Sets the sound-file volume once (1..127; any other value is taken as 127).
void fn_802F7244(beCri *self, int volume)
{
    if (self->_sndfVolume == 0) {
        if (volume <= 0 || volume > 0x7F) volume = 0x7F;
        self->_sndfVolume = volume;
        fn_803C2734(0, 0xA0010000, volume);
    }
}

// Creates the sound-file buffer pool and makes beCriSfpData's _dataBuffer allocate from it.
void fn_802F7294(beCri *)
{
    fn_8006F428(lbl_80562104[0], lbl_804254A8, 0x20);
    fn_80062C90(memoryField(*reinterpret_cast<void **>(beCriSfpData_meta), lbl_804254B4), lbl_804254A8);
}

void *beCri_virtual58(beCri *) { return *reinterpret_cast<void **>(beCri_meta); }

}
