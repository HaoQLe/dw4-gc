// Gap::Bec::beSound: its registration for messages and the sound settings.
#include "beSound.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Registers for "SOUND" messages and applies the sound settings: volumes, and the data type ("acx" by default).
void beSound_virtual7C(beSound *self, beBaseInfoRam *ram)
{
    fn_803050A8(self->_messenger, ram, "SOUND", 0, -1);
    beSoundInfo *info = static_cast<beSoundInfo *>(ram->_parentInfo);
    self->_cri->_baseVolume = info->_baseVolume;
    fn_802F7244(self->_cri, info->_sndfVolume);
    if (!info->_dataType) setString(info->_dataType, "acx");
    if (strcmp(info->_dataType, "acx") == 0) self->_cri->_dataType = 0;
    else self->_cri->_dataType = 1;
}

}
