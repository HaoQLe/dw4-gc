// Gap::Bec::beCri: sound-file data transfers to the ports.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Transfers a sound-file data block to its port; true once transferred.
bool fn_802F69B8(beCri *, beCriSfpData *data)
{
    if (data->_isTransfer) return true;
    int port = data->_portNo;
    if (lbl_80535A6C[0][port] || lbl_80535A6C[1][port]) fn_803C1CC4(port);
    lbl_80535A6C[0][port] = data->_tblSize;
    lbl_80535A6C[1][port] = data->_pcmSize;
    if (fn_803C1DD0(lbl_80535A6C[0]) < 0) return false;
    if (fn_803C2418(port, data->_dataBuffer) < 0) return false;
    fn_80056378(data->_dataBuffer);
    data->_dataBuffer = 0;
    data->_isTransfer = true;
    return true;
}

// For sound-file data (data type 1), transfers every block of the binary objects; true if all transferred.
bool fn_802F6AA8(beCri *self)
{
    bool ok = true;
    igObjectList *list = self->_lsBinObjs;
    if (self->_dataType == 1) {
        for (int i = 0; i < list->_count; i++) {
            igMetaObject *sfpData = *reinterpret_cast<igMetaObject **>(beCriSfpData_meta);
            beCriSfpData *data = item<beCriSfpData>(list, i);
            if (sfpData == metaOf(data)) {
                data->_portNo = i;
                if (!fn_802F69B8(self, data)) ok = false;
            } else {
                char line[64];
                char message[1024];
                sprintf(line, "---- not SfpData[%s]", nameOf(data));
                strcpy(message, "----  WARNING  -----------------\n");
                strcat(message, line);
                strcat(message, "--------------------------------");
                ok = false;
            }
        }
    }
    return ok;
}

// Releases the ports of the transferred sound-file data (all of them, or all but the first) and empties the
// binary object list.
bool fn_802F6BAC(beCri *self, bool all)
{
    int last = all ? -1 : 0;
    for (int i = self->_lsBinObjs->_count - 1; i > last; i--) {
        igMetaObject *acxData = *reinterpret_cast<igMetaObject **>(beCriAcxData_meta);
        beCriSfpData *data = item<beCriSfpData>(self->_lsBinObjs, i);
        if (acxData == metaOf(data)) continue;
        igMetaObject *sfpData = *reinterpret_cast<igMetaObject **>(beCriSfpData_meta);
        if (sfpData != metaOf(data)) continue;
        if (!data->_isTransfer) continue;
        int port = data->_portNo;
        if (lbl_80535A6C[0][port] || lbl_80535A6C[1][port]) {
            fn_803C1CC4(port);
            lbl_80535A6C[0][port] = 0;
            lbl_80535A6C[1][port] = 0;
            lbl_80535AEC[port] = 0;
        }
    }
    removeAll(self->_lsBinObjs);
    if (self->_lsBinObjs->_count <= 0) fn_8004155C(self->_lsBinObjs, 0, 4);
    return true;
}

// Follows the transfers in progress; false while one is busy or failed. A finished block's buffer is freed
// and the next block's transfer started.
bool fn_802F6DF8(beCri *self)
{
    bool done = true;
    for (int i = 0; i < self->_lsBinObjs->_count; i++) {
        if (lbl_80535AEC[i] == 0 || lbl_80535AEC[i] == 2) continue;
        lbl_80535AEC[i] = fn_803C5D2C(i);
        switch (lbl_80535AEC[i]) {
        case 1:
            return false;
        case 2: {
            beCriSfpData *data = item<beCriSfpData>(self->_lsBinObjs, i);
            fn_80056378(data->_dataBuffer);
            data->_dataBuffer = 0;
            data->_isTransfer = true;
            igObjectList *list = self->_lsBinObjs;
            if (i < list->_count - 1 && !item<beCriSfpData>(list, i + 1)->_isTransfer)
                fn_802F69B8(self, item<beCriSfpData>(list, i + 1));
            break;
        }
        case 3:
            done = false;
            break;
        default:
            done = false;
            break;
        }
    }
    return done;
}

}
