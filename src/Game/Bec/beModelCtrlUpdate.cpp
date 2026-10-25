// beModelCtrl: the per-frame RAM update (0x8030CB2C..0x8030D084).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// The per-frame update of a running model RAM (virtual 0x84): a model whose sequence ended (SQ_ERAS) is removed;
// otherwise the control state and the AI run, then the model moves (or follows its position lock: a node, a
// recorded path, or another model's bone), carries along what it rides on, and runs its checks.
void beModelCtrl_virtual84(beModelCtrl *self, beBaseInfoRam *ram)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfo *info = static_cast<beModelCtrlInfo *>(ram->_parentInfo);
    beModelCtrlInfoRamData *data = ramDataOf(ram, mc.ONE);
    beModelCtrlInfoWork *work = data->_work;
    if (!ram->_isRun) return;
    if (work->_isOnFreeze) return;
    if (strcmp(work->_seqCodeName, mc.SQ_ERAS) == 0) {
        virtuals(self)->handleMessage(ram, mc.REMOVE);
        return;
    }
    work->_keyInput = false;
    setString(work->_keyEventName, mc.SQ_NONE);
    if (work->_ctrlSt0 != 0) fn_80309168(self, info, ram, work);
    else if (work->_aI) fn_8031E8BC(ram, mc.AITIMER);
    virtuals(self)->beforeMove(ram);
    if (!work->_isPosLock) {
        fn_8030A448(self, info, ram, work);
    } else {
        if (work->_posLockNode) {
            float matrix[16];
            fn_80128CF4(matrix, work->_posLockNode->_m);
            fn_80128DC8(matrix, work->_posLockOffset);
            setMatrix(data->_node, matrix);
        } else if (work->_posLockTrc) {
            igTransformRecorder *recorder = work->_posLockTrc->_recorderNode;
            setMatrix(data->_node, reinterpret_cast<float *>(reinterpret_cast<char *>(recorder) + recorderMatrixField()->_offset));
        } else if (work->_posLockModelName) {
            fn_80305344(self->_messenger, mc.ACTION, work->_posLockModelName, ram->_ramNo);
            fn_80306FDC(self->_messenger, work->_posLockBoneName);
            fn_80305A28(self->_messenger, mc.GETBONEMATRIX);
            if (fn_80306D58(self->_messenger) == 1) {
                Matrix44 bone(fn_80306DE8(self->_messenger, 0));
                fn_80305ED0(self->_messenger, mc.MODELCTRL, work->_posLockModelName, ram->_ramNo, mc.GETMATRIX);
                if (fn_80306D58(self->_messenger) == 1) {
                    Matrix44 matrix(fn_80306DE8(self->_messenger, 0));
                    fn_80128774(matrix.m, bone.m);
                    setMatrix(data->_node, matrix.m);
                }
            }
        }
        if (work->_baseAABox) fn_8030D7F4(self, data->_node, work->_baseAABox);
    }
    beModelCtrlInfoRideOn *rideOn = work->_rideOnData;
    if (rideOn) {
        reinterpret_cast<beModelCtrlInfoRideOnVirtuals *>(rideOn)->follow(data->_node->_m);
        float oldPosition[3];
        fn_80128DAC(rideOn->_oldMatrix, oldPosition);
        float position[3];
        fn_80128DAC(data->_node->_m, position);
        float offset[3];
        offset[0] = position[0] - oldPosition[0];
        offset[1] = position[1] - oldPosition[1];
        offset[2] = position[2] - oldPosition[2];
        float oldRotation[16];
        fn_80128CF4(oldRotation, rideOn->_oldMatrix);
        float matrix[16];
        fn_80128CF4(matrix, data->_node->_m);
        fn_80128D90(oldRotation, lbl_804F8AE0);
        fn_8012A92C(oldRotation, oldRotation);
        fn_80128D90(matrix, offset);
        float local[16];
        fn_801285A0(local);
        fn_80128690(local, matrix, oldRotation);
        float carried[16];
        fn_801285A0(carried);
        fn_80128690(carried, local, rideOn->_modelNode->_m);
        setMatrix(data->_node, carried);
        fn_80128CF4(rideOn->_oldMatrix, rideOn->_modelNode->_m);
        work->_isHitCheck = true;
    }
    if (work->_wCheckName) fn_8030BDB8(self, info, ram, work);
    fn_8030C334(self, ram, work);
    fn_803107E0(work->_subCommand, ram);
    if (work->_isHitCheck) fn_80309C74(self, info, ram, work);
    rideOn = work->_rideOnData;
    if (rideOn && rideOn->_modelRamNo == 104) {
        float position[3];
        fn_80128DAC(data->_node->_m, position);
        beModelCtrlInfoRideOn4 *carrier = static_cast<beModelCtrlInfoRideOn4 *>(rideOn);
        carrier->_oldPlayerPos[0] = position[0];
        carrier->_oldPlayerPos[1] = position[1];
        carrier->_oldPlayerPos[2] = position[2];
    }
}

void beModelCtrl_virtualC0(beModelCtrl *, beBaseInfoRam *) {}             // 0xC0: before the move

}
