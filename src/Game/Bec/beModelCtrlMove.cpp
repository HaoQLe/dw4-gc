// beModelCtrl: the move objects and move commands (0x8030A0A0..0x8030AE6C).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// The move objects' states: 0, whether any of the three translations runs; 1, whether the turn runs; 2,
// whether the vertical move runs; 3, whether it rises (mode 4); 4, whether it falls (mode 1); 5 stops it.
bool fn_8030A0A0(beModelCtrl *, beBaseInfoRam *, beModelCtrlInfoWork *work, int mode)
{
    beModelCtrlMoveObjectList *moves = work->_moveObjectList;
    if (moves->_count == 0) return false;
    switch (mode) {
    case 0:
        if (item<beModelCtrlMoveObject>(moves, 0)->_isRun) return true;
        if (item<beModelCtrlMoveObject>(moves, 1)->_isRun) return true;
        return item<beModelCtrlMoveObject>(moves, 2)->_isRun != 0;
    case 1:
        return item<beModelCtrlMoveObject>(moves, 3)->_isRun != 0;
    case 2:
        return item<beModelCtrlMoveObject>(moves, 1)->_isRun != 0;
    case 3: {
        beModelCtrlMoveObject *vertical = item<beModelCtrlMoveObject>(moves, 1);
        if (vertical->_isRun && vertical->_mode == 4) return true;
        return false;
    }
    case 4: {
        beModelCtrlMoveObject *vertical = item<beModelCtrlMoveObject>(moves, 1);
        if (vertical->_isRun && vertical->_mode == 1) return true;
        return false;
    }
    case 5: {
        beModelCtrlMoveObject *vertical = item<beModelCtrlMoveObject>(moves, 1);
        vertical->_isRun = false;
        vertical->_speed = kZero;
    }
    }
    return true;
}

// Starts a move: mode 0 accelerates up to value, 1 down to -value, 2 and 4 decelerate from value (4 starting
// at value), 3 and 5 from -value (5 starting at -value); the acceleration reaches value in frames frames. A
// nonzero endTime stops it after that many frames.
void fn_8030A1F4(beModelCtrlMoveObject *move, int mode, float value, float frames, float endTime)
{
    move->_mode = mode;
    move->_value = value;
    float square = frames * frames;
    move->_acc = value / (square * kHalf);
    move->_endTime = endTime;
    move->_isSeqStop = false;
    switch (mode) {
    case 4:
        move->_speed = value;
        break;
    case 5:
        move->_speed = -value;
        break;
    }
    move->_isRun = true;
}

// Ends a timed move: an acceleration continues as its stop deceleration; anything else stops.
void fn_8030A254(beModelCtrlMoveObject *move)
{
    float zero = kZero;
    move->_endTime = zero;
    if (move->_mode == 0) fn_8030A1F4(move, 2, move->_stopValue, move->_stopFrame, zero);
    else if (move->_mode == 1) fn_8030A1F4(move, 3, move->_stopValue, move->_stopFrame, zero);
    else {
        move->_isRun = false;
        move->_speed = zero;
    }
    move->_isSeqStop = false;
}

// Advances a move by frames frames (at most 3) and returns the distance covered.
float fn_8030A2D8(beModelCtrlMoveObject *move, float frames)
{
    if (!move->_isRun) return kZero;
    float left = move->_endTime;
    if (kZero != left) {
        left -= frames;
        if (left < kZero) {
            fn_8030A254(move);
            if (!move->_isRun) return kZero;
        } else {
            move->_endTime = left;
        }
    }
    if (frames > kThree) frames = kThree;
    float step = frames * move->_acc;
    float speed = move->_speed;
    switch (move->_mode) {
    case 2:
    case 4:
        speed -= step;
        if (speed < kZero) {
            speed = kZero;
            move->_isRun = false;
            move->_speed = speed;
        }
        break;
    case 3:
    case 5:
        speed += step;
        if (speed > kZero) {
            speed = kZero;
            move->_isRun = false;
            move->_speed = speed;
        }
        break;
    case 0:
        speed += step;
        if (speed > move->_value) speed = move->_value;
        break;
    case 1:
        speed -= step;
        if (speed < -move->_value) speed = -move->_value;
        break;
    }
    move->_speed = speed;
    return speed * frames;
}

// Moves the model by its move objects since the last frame (KEIKATIMER): the turn object turns its target
// direction around Y; the three translations move its node in its own axes, after which the hit check runs and
// the base box follows.
void fn_8030A448(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlMoveObjectList *moves = work->_moveObjectList;
    work->_isHitCheck = false;
    if (moves->_count == 0) return;
    float frames = fn_8031E4C4(ram, mc.KEIKATIMER);
    if (item<beModelCtrlMoveObject>(moves, 3)->_isRun) {
        float turn = mc.degreesToRadians * fn_8030A2D8(item<beModelCtrlMoveObject>(work->_moveObjectList, 3), frames);
        work->_targetDirection[1] = turn + work->_targetDirection[1];
        float size = turn;
        if (turn < mc.zero) size = -turn;
        work->_directionLimiter[1] = mc.f190 * size;
    }
    fn_8030C85C(self, info, ram, work, false);
    if (item<beModelCtrlMoveObject>(moves, 0)->_isRun || item<beModelCtrlMoveObject>(moves, 1)->_isRun || item<beModelCtrlMoveObject>(moves, 2)->_isRun) {
        beModelCtrlInfoRamData *data = ramDataOf(ram, mc.ONE);
        float matrix[16];
        fn_80128CF4(matrix, data->_node->_m);
        float step[3];
        step[0] = fn_8030A2D8(item<beModelCtrlMoveObject>(work->_moveObjectList, 0), frames);
        step[1] = fn_8030A2D8(item<beModelCtrlMoveObject>(work->_moveObjectList, 1), frames);
        step[2] = fn_8030A2D8(item<beModelCtrlMoveObject>(work->_moveObjectList, 2), frames);
        fn_80128DC8(matrix, step);
        reinterpret_cast<igTransformVirtuals *>(data->_node)->setMatrix(matrix);
        work->_isHitCheck = true;
        if (work->_baseAABox) fn_8030D7F4(self, data->_node, work->_baseAABox);
    }
}

// A move command (MOVE, MOVEEX or MOVERL data) for a model RAM. The first move command creates the four move
// objects: X, Y and Z translation and the turn around Y. MOVE names a preset move (Stop, Move, Push, Back on Z;
// Jump and Fall on Y); MOVEEX spells one out as four letters: T(ranslate) or R(otate), the axis, P(lus) or
// M(inus), and A(ccelerate), D(ecelerate) or T(o speed); MOVERL named JOINT locks the model to a recorded path
// of another model, any other MOVERL to one of its bones. A position lock ends with the model facing along its
// node.
bool fn_8030A6BC(beModelCtrl *self, beBaseInfoRam *ram, beModelCtrlInfoWork *work, igNamedObject *command)
{
    const beModelCtrlPool &mc = MC;
    if (!fn_8031E138(ram, mc.KEIKATIMER)) fn_8031DE44(ram, mc.KEIKATIMER, 0);
    if (work->_isPosLock) {
        work->_isPosLock = false;
        beModelCtrlInfoRamData *data = ramDataOf(ram, mc.ONE);
        float forward[3];
        fn_8012D434(forward, lbl_804F8B10, data->_node->_m);
        work->_targetDirection[1] = work->_direction[1] = atan2(forward[0], forward[2]);
    }
    if (work->_moveObjectList->_count == 0) {
        Ref<beModelCtrlMoveObject> move(0, Ref<beModelCtrlMoveObject>::adopt);
        addMoveObject(self, work, move);   // X
        addMoveObject(self, work, move);   // Y
        addMoveObject(self, work, move);   // Z
        addMoveObject(self, work, move);   // the turn around Y
    }
    igMetaObject *meta = metaVar(beModelCtrlMOVE_meta);
    if (meta == metaOf(command)) {
        beModelCtrlMOVE *move = static_cast<beModelCtrlMOVE *>(command);
        const char *name = nameOrEmpty(move);
        float value = move->_value;
        float frames = move->_frame;
        if (strcmp(name, mc.Stop) == 0) fn_8030A1F4(item<beModelCtrlMoveObject>(work->_moveObjectList, 2), 2, value, frames, mc.zero);
        else if (strcmp(name, mc.Move) == 0) fn_8030A1F4(item<beModelCtrlMoveObject>(work->_moveObjectList, 2), 0, value, frames, mc.zero);
        else if (strcmp(name, mc.Push) == 0) fn_8030A1F4(item<beModelCtrlMoveObject>(work->_moveObjectList, 2), 4, value, frames, mc.zero);
        else if (strcmp(name, mc.Back) == 0) fn_8030A1F4(item<beModelCtrlMoveObject>(work->_moveObjectList, 2), 5, value, frames, mc.zero);
        else if (strcmp(name, mc.Jump) == 0) fn_8030A1F4(item<beModelCtrlMoveObject>(work->_moveObjectList, 1), 4, value, frames, mc.zero);
        else if (strcmp(name, mc.Fall) == 0) fn_8030A1F4(item<beModelCtrlMoveObject>(work->_moveObjectList, 1), 1, value, frames, mc.zero);
    } else {
    igMetaObject *exMeta = metaVar(beModelCtrlMOVEEX_meta);
    if (exMeta == metaOf(command)) {
        beModelCtrlMOVEEX *moveEx = static_cast<beModelCtrlMOVEEX *>(command);
        const char *name = nameOrEmpty(moveEx);
        int index = name[1] - 'X' + (name[0] == 'T' ? 0 : 2);
        float value = moveEx->_value;
        float frames = moveEx->_frame;
        float playTime = moveEx->_playTime;
        bool isSeqStop = moveEx->_isSeqStop;
        float stopValue = moveEx->_stopValue;
        float stopFrame = moveEx->_stopFrame;
        int mode;
        switch (name[3]) {
        case 'A': mode = 0; break;
        case 'D': mode = 2; break;
        case 'T': mode = 4; break;
        }
        if (name[2] == 'M') mode++;
        beModelCtrlMoveObject *object = item<beModelCtrlMoveObject>(work->_moveObjectList, index);
        fn_8030A1F4(object, mode, value, frames, playTime);
        object->_isSeqStop = isSeqStop;
        object->_stopValue = stopValue;
        object->_stopFrame = stopFrame;
    } else if (strcmp(nameOrEmpty(command), mc.JOINT) == 0) {
        beModelCtrlMOVERL *lock = static_cast<beModelCtrlMOVERL *>(command);
        fn_80305ED0(self->_messenger, mc.MODELCTRL, lock->_modelName, ram->_ramNo, mc.GETTRCDATA);
        if (fn_80306E1C(self->_messenger) == 1) {
            work->_isPosLock = true;
            setRef(work->_posLockTrc, static_cast<beModelCtrlInfoDataTrc *>(fn_80306FB4(self->_messenger, 0)));
        }
    } else {
        beModelCtrlMOVERL *lock = static_cast<beModelCtrlMOVERL *>(command);
        setString(work->_posLockModelName, lock->_modelName);
        setString(work->_posLockBoneName, lock->_boneName);
        work->_isPosLock = true;
    }
    }
    return true;
}

}
