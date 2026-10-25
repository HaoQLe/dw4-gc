// beModelCtrl: quicksand and slippery floors, and the wall and floor checks (0x80309674..0x8030A0A0).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Quicksand (RideOn3) draws the rider toward its world position: at maxSpeed within minKyori, minSpeed beyond
// maxKyori, and in between in proportion.
void beModelCtrlInfoRideOn3_virtual5C(beModelCtrlInfoRideOn3 *self, float *rider)
{
    const beModelCtrlPool &mc = MC;
    fn_80128D90(self->_oldMatrix, lbl_804F8AE0);
    float position[3];
    fn_80128DAC(rider, position);
    float toward[3];
    toward[0] = self->_worldPosition[0];
    toward[1] = self->_worldPosition[1];
    toward[2] = self->_worldPosition[2];
    toward[0] -= position[0];
    toward[1] -= position[1];
    toward[2] -= position[2];
    float distance = poolSqrtf(toward[0] * toward[0] + toward[1] * toward[1] + toward[2] * toward[2], mc);
    float scale = mc.one / distance;
    toward[0] *= scale;
    toward[1] *= scale;
    toward[2] *= scale;
    if (distance < mc.zero) distance = -distance;
    float speed;
    if (distance >= self->_maxKyori) speed = self->_minSpeed;
    else if (distance <= self->_minKyori) speed = self->_maxSpeed;
    else speed = self->_maxSpeed - (distance - self->_minKyori) / ((self->_maxKyori - self->_minKyori) / (self->_maxSpeed - self->_minSpeed));
    toward[0] *= speed;
    toward[1] *= speed;
    toward[2] *= speed;
    fn_80128D90(self->_modelNode->_m, toward);
}

// A slippery floor (RideOn4) keeps the rider sliding. The first frame starts; the second takes the rider's
// horizontal move since the last frame as the slide (scaled to 0.6 of its direction when longer than 0.6). After
// that the slide moves toward each frame's move by the scalar, and stops once every axis is within the limiter.
// The floor's node carries the rider by the slide, while the rider itself stays at its last horizontal position.
void beModelCtrlInfoRideOn4_virtual5C(beModelCtrlInfoRideOn4 *self, float *rider)
{
    const beModelCtrlPool &mc = MC;
    fn_80128D90(self->_oldMatrix, lbl_804F8AE0);
    float position[3];
    fn_80128DAC(rider, position);
    float height = position[1];
    position[1] = mc.zero;
    float old[3];
    old[0] = self->_oldPlayerPos[0];
    old[1] = self->_oldPlayerPos[1];
    old[2] = self->_oldPlayerPos[2];
    old[1] = mc.zero;
    float move[3];
    move[0] = position[0] - old[0];
    move[1] = position[1] - old[1];
    move[2] = position[2] - old[2];
    switch (self->_isFirst) {
    case 0:
        fn_80128D90(self->_modelNode->_m, lbl_804F8AE0);
        self->_isFirst = 1;
        return;
    case 1: {
        move[1] = mc.zero;
        float length = move[0] * move[0] + move[1] * move[1] + move[2] * move[2];
        if (length >= mc.f110) {
            float scale = mc.one / poolSqrtf(length, mc);
            move[0] *= scale;
            move[1] *= scale;
            move[2] *= scale;
            move[0] *= mc.f114;
            move[1] *= mc.f114;
            move[2] *= mc.f114;
        }
        self->_vector[0] = move[0];
        self->_vector[1] = move[1];
        self->_vector[2] = move[2];
        fn_80128D90(self->_modelNode->_m, lbl_804F8AE0);
        self->_isFirst = 2;
        return;
    }
    }
    float slide[3];
    fn_8012D3F4(slide, self->_vector, move, self->_scalar);
    for (int i = 0; i < 3; i++) {
        if (i == 1) slide[i] = mc.zero;
        if (slide[i] > self->_limitter || slide[i] < -self->_limitter) break;
        if (i == 2) {
            slide[0] = lbl_804F8AE0[0];
            slide[1] = lbl_804F8AE0[1];
            slide[2] = lbl_804F8AE0[2];
        }
    }
    self->_vector[0] = slide[0];
    self->_vector[1] = slide[1];
    self->_vector[2] = slide[2];
    fn_80128D90(self->_modelNode->_m, slide);
    slide[0] += old[0];
    slide[1] += old[1];
    slide[2] += old[2];
    old[1] = height;
    fn_80128D90(rider, old);
}

// The wall and floor checks (HITLANDDELIVER): a wall hit runs the WHit script; on the floor, a falling model
// lands (or keeps falling and plays SQ_FALL), the FHit script runs, and the model rides on the model it landed
// on (a RAM number of 100 or more is never left).
void fn_80309C74(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    const beModelCtrlPool &mc = MC;
    if (work->_isWallCheck) {
        const char *command = mc.HITWALLFULL;
        if (!work->_rideOnData) command = mc.HITWALL;
        {
            int ramNo = ram->_ramNo;
            fn_80305ED0(self->_messenger, mc.HITLANDDELIVER, nameOrEmpty(info), ramNo, command);
        }
        if (work->_luaWHit && fn_80306A1C(self->_messenger, 1))
            fn_8030B6EC(self, ram, work->_luaWHit, mc.WHit, nameOrEmpty(info), 0, 0, 0, 0, 0);
    }
    if (work->_isFloorCheck) {
        if (fn_8030A0A0(self, ram, work, 3)) return;
        {
            int ramNo = ram->_ramNo;
            fn_80305ED0(self->_messenger, mc.HITLANDDELIVER, nameOrEmpty(info), ramNo, mc.HITFLOORCHECK);
        }
        if (fn_8030690C(self->_messenger) == 0) return;
        const char *floorName = 0;
        int floorRamNo;
        int strings = fn_80306FCC(self->_messenger);
        if (strings) {
            floorName = fn_8030709C(self->_messenger, 0);
            if (strcmp(floorName, lbl_80567330) != 0) floorRamNo = fn_80306B00(self->_messenger, 0);
            else strings = 0;
        }
        bool wall = fn_80306A1C(self->_messenger, 0);
        bool floor = fn_80306A1C(self->_messenger, 1);
        bool landed = false;
        if (work->_isFallCheck) {
            if (fn_8030A0A0(self, ram, work, 4)) {
                if (floor) {
                    {
                        int ramNo = ram->_ramNo;
                        fn_80305ED0(self->_messenger, mc.HITLANDDELIVER, nameOrEmpty(info), ramNo, mc.HITFLOORADJUST);
                    }
                    fn_8030A0A0(self, ram, work, 5);
                    landed = true;
                }
            } else if (wall) {
                {
                    int ramNo = ram->_ramNo;
                    fn_80305ED0(self->_messenger, mc.HITLANDDELIVER, nameOrEmpty(info), ramNo, mc.HITFLOORADJUST);
                }
                fn_8030A0A0(self, ram, work, 5);
                return;
            } else {
                if (strcmp(work->_seqCodeName, mc.SQ_SLEP) != 0) virtuals(self)->handleMessage(ram, mc.SQ_FALL);
                return;
            }
        }
        if (work->_luaFHit && floor) fn_8030B6EC(self, ram, work->_luaFHit, mc.FHit, nameOrEmpty(info), 0, 0, 0, 0, 0);
        if (landed) {
            beModelCtrlInfoRideOn *rideOn = work->_rideOnData;
            if (rideOn && rideOn->_modelRamNo >= 100) return;
            if (strings == 0) {
                if (rideOn) clearRef(work->_rideOnData);
            } else if (!rideOn) {
                Ref<beModelCtrlInfoRideOn> created(beModelCtrlInfoRideOn_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlInfoRideOn>::adopt);
                fn_8030949C(created, floorName, floorRamNo, self->_messenger);
                setRef(work->_rideOnData, created._object);
            } else if (!fn_803095D0(rideOn, floorName, floorRamNo)) {
                fn_8030949C(work->_rideOnData, floorName, floorRamNo, self->_messenger);
            }
        }
    }
}

}
