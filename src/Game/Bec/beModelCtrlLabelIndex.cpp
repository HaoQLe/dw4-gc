// beModelCtrl: a sequence's label offset (0x8030D084..0x8030D260).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// The command index of the current sequence's label (the LABELCTRL label set for it), found among its LABEL
// commands on first use; 0 without labels, -1 when the label is missing.
int fn_8030D084(beModelCtrl *, beModelCtrlInfoWork *work)
{
    int offset = 0;
    if (work->_labelSeqList) {
        int index;
        {
            POOLED_REF(key, work->_seqCodeName);
            index = fn_8004270C(work->_labelSeqList, &key, 0);
        }
        if (index != -1) {
            offset = static_cast<int *>(work->_labelOffsetList->_data)[index];
            if (offset == -1) {
                const char *label = fn_800218F4(work->_labelNameList, index).getString();
                beModelCtrlData *data = work->_comData;
                int count = data->_comList->_count;
                for (int i = 0; i < count; i++) {
                    igNamedObject *command = item<igNamedObject>(data->_comList, i);
                    if (isA(command, beModelCtrlLABEL_meta) && strcmp(nameOrEmpty(command), label) == 0) {
                        offset = i;
                        setValueAt(work->_labelOffsetList, index, i);
                        break;
                    }
                }
            }
        }
    }
    return offset;
}

}
