// beNDMWGameRam: a technique's record and the living RAMs near a point (0x80371524..0x803717A4).
#include "beNDMWGameRam.h"

#pragma auto_inline off

extern "C" {

// Sets *record to the record of the player's technique whose base technique is baseNo (unchanged if none).
void fn_80371524(beNDMWGameRam *self, igObject *data, int baseNo, int *record)
{
    igObjectList *techniques = fn_8031F4EC(data, "WAZALIST")->_data;
    for (int i = 0; i < techniques->_count; i++) {
        beNDMWItemWaza *technique = item<beNDMWItemWaza>(techniques, i);
        if (baseNo == technique->_baseNo) {
            *record = technique->_recNo;
            return;
        }
    }
}

// Collects in a new int list (*result, a new reference) the RAM numbers of target's RAMs other than exclude
// that are within 30 units of position and still have HP.
void fn_803715AC(Ref<igIntList> *result, beNDMWGameRam *self, const char *target, int exclude, const float *position)
{
    Ref<igIntList> found(igIntList_create(poolFor(self, lbl_8056225C)), Ref<igIntList>::adopt);
    fn_80305F58(self->_messenger, target, "GETMATRIX");
    int count = fn_80306A30(self->_messenger);
    for (int i = 0; i < count; i++) {
        int ramNo = fn_80306B00(self->_messenger, i);
        if (ramNo == exclude) continue;
        Matrix44 matrix = fn_80306DE8(self->_messenger, i);
        float offset[3];
        fn_80128DAC(matrix.m, offset);
        offset[0] -= position[0];
        offset[1] -= position[1];
        offset[2] -= position[2];
        if (offset[0] * offset[0] + offset[1] * offset[1] + offset[2] * offset[2] < 900.0f) {
            fn_80306604(self->_messenger);
            fn_80305344(self->_messenger, target, 0, ramNo);
            fn_80306900(self->_messenger, true);
            fn_80305A28(self->_messenger, "GETHP");
            if (fn_80306B00(self->_messenger, 0) != 0) appendInt(found, ramNo);
            fn_803067A0(self->_messenger);
        }
    }
    result->_object = found;
    if (result->_object) addRef(result->_object);
}

}
