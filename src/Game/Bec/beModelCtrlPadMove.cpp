// beModelCtrl: PDMOVE commands (0x8030AEE0..0x8030B014).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// A PDMOVE command: the pad-move speed and frames for stopping (Stop: entries 0 and 1) or moving (Move: entries
// 2 and 3); the list starts as four zeros.
bool fn_8030AEE0(beModelCtrl *, beBaseInfoRam *, beModelCtrlInfoWork *work, beModelCtrlPDMOVE *command)
{
    int index = strcmp(nameOrEmpty(command), kMove) == 0 ? 2 : 0;
    if (work->_pdMoveDataList->_count == 0) {
        for (int i = 0; i < 4; i++) appendFloat(work->_pdMoveDataList, lbl_804DEBA0[0]);
    }
    float value = command->_value;
    setValueAt(work->_pdMoveDataList, index, value);
    float frames = command->_frame;
    setValueAt(work->_pdMoveDataList, index + 1, frames);
    return true;
}

}
