// beModelCtrl: taking model infos, starting model RAMs, and the AI's choices (0x803082A4..0x80308FF4).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
extern int __float_nan[];
double atan2(double y, double x);

// The target search (the global target at 0x80535BA8). A search starts from a model's matrix; the found
// target's position and its squared distance are kept for the next calls.
bool fn_8031C67C(void *matrix, const char *kind, const char *mode);   // searches for a target of a kind ("PLAYER", "ENEMY")
bool fn_8031C790(void *matrix, float *position);                      // takes a world position as the target
const float *fn_8031C868();                                           // the searching model's position
const float *fn_8031C8E0();                                           // the target's position
float fn_8031C8EC();                                                  // the squared distance to the target
float fn_8031C8F8(float angle);                                       // angle added to the direction to the target

}

// MSL's sqrtf, with this file's constants: three Newton steps from the hardware estimate; NaN for negative
// input or NaN.
static inline int fpclassifyf(float x)
{
    switch (*reinterpret_cast<int *>(&x) & 0x7F800000) {
    case 0x7F800000:
        if (*reinterpret_cast<int *>(&x) & 0x7FFFFF) return 1;   // NaN
        return 2;                                                // infinite
    case 0:
        if (*reinterpret_cast<int *>(&x) & 0x7FFFFF) return 5;   // subnormal
        return 3;                                                // zero
    }
    return 4;                                                    // normal
}
static inline float poolSqrtf(float x, const beModelCtrlPool &mc)
{
    if (x > mc.zero) {
        double guess = __frsqrte((double)x);
        guess = mc.sqrtHalf * guess * (mc.sqrtThree - guess * guess * x);
        guess = mc.sqrtHalf * guess * (mc.sqrtThree - guess * guess * x);
        guess = mc.sqrtHalf * guess * (mc.sqrtThree - guess * guess * x);
        return (float)(x * guess);
    } else if (x < mc.sqrtZero) {
        return *reinterpret_cast<float *>(__float_nan);
    } else if (fpclassifyf(x) == 1) {
        return *reinterpret_cast<float *>(__float_nan);
    }
    return x;
}

// Frames (at 60 per second) as nanoseconds, for the RAM timers.
static inline unsigned long long framesToNanoseconds(float frames, const beModelCtrlPool &mc)
{
    return (unsigned long long)(mc.nanosecondsPerSecond * frames / mc.framesPerSecond);
}

extern "C" {

// Finds the managers the controller works with: the Lua manager and the target object.
void fn_803082A4(beModelCtrl *self)
{
    if (!self->_luaManager) self->_luaManager = static_cast<beLua *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beLua_meta)));
    if (!self->_targetObj) self->_targetObj = static_cast<beTargetObj *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beTargetObj_meta)));
}

// The class of the infos the controller takes.
void *fn_80308314(beModelCtrl *) { return *reinterpret_cast<void **>(beModelCtrlInfo_meta); }

// Takes a beModelCtrlInfo of a kind this controller handles.
bool fn_80308324(beModelCtrl *self, igObject *info)
{
    igMetaObject *meta = virtuals(self)->infoMeta();
    if (meta == metaOf(info) && virtuals(self)->isKind(static_cast<beModelCtrlInfo *>(info)->_kindString) == true) {
        fn_802F251C(self, info);
        return true;
    }
    return false;
}

// Starts a model RAM: registers it for the controller's messages, and for the hit messages its info's HIT data
// asks for.
void fn_803083CC(beModelCtrl *self, beBaseInfoRam *ram)
{
    const beModelCtrlPool &mc = MC;
    beBaseInfo *info = ram->_parentInfo;
    fn_80305308(self->_messenger, ram, mc.MODELCTRL);
    beModelCtrlInfoDataHit *hit = static_cast<beModelCtrlInfoDataHit *>(fn_800695CC(info->_dataList, nameField(), mc.HIT));
    if (hit) {
        if (hit->_isHitPlayerBullet) fn_80305308(self->_messenger, ram, mc.HITPLAYERBULLET);
        if (hit->_isHitPlayerTalk) fn_80305308(self->_messenger, ram, mc.HITPLAYERTALK);
        if (hit->_isHitEnemyBullet) fn_80305308(self->_messenger, ram, mc.HITENEMYBULLET);
    }
    virtuals(self)->ramStarted(ram);
}

// The map AI (AIM data): when the AI timer runs out, finds the target (a world position or the player), picks
// the zone by its distance and a random entry of the zone, and turns and walks as the entry says until the
// timer runs out again. The chosen sequence becomes the key event.
void fn_803084B8(beModelCtrl *self, beModelCtrlInfo *, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlInfoDataAIM *aim)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfoRamData *data = ramDataOf(ram, mc.ONE);
    igStringRef sequence;
    beModelCtrlInfoAI *ai = work->_aI;
    if (fn_8031E238(ram, mc.AITIMER)) {
        beModelCtrlAIMap *map = item<beModelCtrlAIMap>(aim->_aIMapList, ai->_mapNo);
        if (!map->_targetType) setString(map->_targetType, mc.NEAR);
        if (strcmp(map->_targetType, mc.WPOS) == 0) {
            float position[3];
            position[0] = work->_aI->_worldPos[0];
            position[1] = work->_aI->_worldPos[1];
            position[2] = work->_aI->_worldPos[2];
            if (!fn_8031C790(&data->_node->_m, position)) return;
        } else {
            if (!fn_8031C67C(&data->_node->_m, mc.PLAYER, map->_targetType)) return;
        }
        float distance = fn_8031C8EC();
        work->_directionLimiter[1] = map->_rotLimiter;
        beModelCtrlAIDataList *zone;
        if (map->_x1Square > distance) zone = map->_zoneA;
        else if (map->_x2Square > distance) zone = map->_zoneB;
        else if (map->_x3Square > distance) zone = map->_zoneC;
        else zone = map->_zoneD;
        int roll = reinterpret_cast<igRandomVirtuals *>(self->_system->_random)->next() & 0xF;
        beModelCtrlAIData *entry;
        for (int i = 0; i < zone->_count; i++) {
            entry = item<beModelCtrlAIData>(zone, i);
            if (roll < entry->_limit) break;
        }
        work->_targetDirection[1] = fn_8031C8F8(entry->_dirRadian);
        sequence = nameOrEmpty(entry);
        fn_8031DE44(ram, mc.AITIMER, framesToNanoseconds(entry->_time, mc));
    } else {
        sequence = ai->_seqName;
    }
    work->_keyInput = strcmp(sequence.getString(), mc.SQ_WALK) == 0;
    setString(work->_keyEventName, sequence.getString());
    setString(ai->_seqName, sequence.getString());
}

// The homing AI (AIH data): turns toward the nearest target (the player for enemy bullets, else an enemy)
// within its area, sideways (X) from the start and around Y after the first timer, then every second-frame
// period, up to the limit count.
void fn_80308A2C(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlInfoDataAIH *aih)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfoRamData *data = ramDataOf(ram, mc.ONE);
    beModelCtrlInfoAI *ai = work->_aI;
    bool turnX = true;
    bool turnY = false;
    switch (ai->_hStatus) {
    case 0:
        fn_8031DE44(ram, mc.AITIMER, framesToNanoseconds(aih->_firstFrame, mc));
        ai->_hStatus = 1;
    case 1:
        if (fn_8031E238(ram, mc.AITIMER)) {
            ai->_hStatus = 2;
            turnY = true;
        }
        break;
    case 2:
        fn_8031DE44(ram, mc.AITIMER, framesToNanoseconds(aih->_secondFrame, mc));
        ai->_hStatus = 3;
    case 3:
        if (fn_8031E238(ram, mc.AITIMER)) {
            ai->_hStatus = 2;
            turnY = true;
        }
        break;
    case 4:
        turnX = false;
        break;
    }
    if ((turnX && aih->_isXHoming) || (turnY && aih->_isYHoming)) {
        if (turnY) {
            ai->_hCount++;
            if (aih->_limitCount <= ai->_hCount) ai->_hStatus = 4;
        }
        if (strcmp(info->_kindString, mc.KIND_EBULLET) == 0) {
            if (!fn_8031C67C(&data->_node->_m, mc.PLAYER, mc.NEAR)) return;
        } else {
            if (!fn_8031C67C(&data->_node->_m, mc.ENEMY, mc.NEAR)) return;
        }
        float x, y, z, targetX, targetY, targetZ;
        float distance = fn_8031C8EC();
        if (distance <= aih->_areaSquare) {
            const float *own = fn_8031C868();
            x = own[0]; y = own[1]; z = own[2];
            const float *target = fn_8031C8E0();
            targetX = target[0]; targetY = target[1]; targetZ = target[2];
            if (turnX && aih->_isXHoming) {
                work->_directionLimiter[0] = aih->_limitRotX;
                float height = targetY + work->_aIHOffsetY - y;
                work->_targetDirection[0] = -(float)atan2(height, poolSqrtf(distance, mc));
            }
            if (turnY && aih->_isYHoming) {
                work->_directionLimiter[1] = aih->_limitRotY;
                work->_targetDirection[1] = atan2(targetX - x, targetZ - z);
            }
            fn_8030C85C(self, info, ram, work, false);
            work->_targetDirection[1] = work->_direction[1];
        }
    }
}

// A Lua control command: onWalk, toWalk, toWait and isLive set the control state (1 to 4); onFall and noFall
// switch the fall check.
bool fn_80308EC0(beModelCtrl *, beModelCtrlInfoWork *work, igNamedObject *command)
{
    const beModelCtrlPool &mc = MC;
    const char *name = nameOrEmpty(command);
    if (strcmp(name, mc.onWalk) == 0) {
        work->_ctrlSt0 = 1;
        work->_ctrlSt1 = 0;
    } else if (strcmp(name, mc.toWalk) == 0) {
        work->_ctrlSt0 = 2;
        work->_ctrlSt1 = 0;
    } else if (strcmp(name, mc.toWait) == 0) {
        work->_ctrlSt0 = 3;
        work->_ctrlSt1 = 0;
    } else if (strcmp(name, mc.isLive) == 0) {
        work->_ctrlSt0 = 4;
        work->_ctrlSt1 = 0;
    } else if (strcmp(name, mc.onFall) == 0) {
        work->_isFallCheck = true;
    } else if (strcmp(name, mc.noFall) == 0) {
        work->_isFallCheck = false;
    }
    return true;
}

// Runs the RAM's AI: the map AI when its info has AIM data with maps, else the homing AI when it has AIH data.
void fn_80308FF4(beModelCtrl *self, beBaseInfoRam *ram)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfo *info = static_cast<beModelCtrlInfo *>(ram->_parentInfo);
    beModelCtrlInfoWork *work = ramDataOf(ram, mc.ONE)->_work;
    beModelCtrlInfoDataAIM *aim = static_cast<beModelCtrlInfoDataAIM *>(fn_800695CC(info->_dataList, nameField(), mc.AIM));
    if (aim) {
        if (aim->_aIMapList->_count != 0) fn_803084B8(self, info, ram, work, aim);
    } else {
        beModelCtrlInfoDataAIH *aih = static_cast<beModelCtrlInfoDataAIH *>(fn_800695CC(info->_dataList, nameField(), mc.AIH));
        if (aih) fn_80308A2C(self, info, ram, work, aih);
    }
}

// The control state's step (no key event pending): onWalk drives the forward move object between walking
// (the pad-move data's speeds 2 and 3) and stopping (0 and 1) as the key input changes; toWalk and toWait
// switch the key event to walking or waiting. A new key event is then played.
void fn_80309168(beModelCtrl *self, beModelCtrlInfo *, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    const beModelCtrlPool &mc = MC;
    if (work->_isOnCtrl) virtuals(self)->runAI(ram);
    if (strcmp(work->_keyEventName, mc.SQ_NONE) == 0) {
        switch (work->_ctrlSt0) {
        case 1: {
            beModelCtrlMoveObject *forward = item<beModelCtrlMoveObject>(work->_moveObjectList, 2);
            switch (work->_ctrlSt1) {
            case 0:
                if (work->_keyInput) {
                    float *speeds = static_cast<float *>(work->_pdMoveDataList->_data);
                    fn_8030A1F4(forward, 0, speeds[2], speeds[3], mc.zero);
                    work->_ctrlSt1 = 1;
                } else {
                    float *speeds = static_cast<float *>(work->_pdMoveDataList->_data);
                    fn_8030A1F4(forward, 2, speeds[0], speeds[1], mc.zero);
                    work->_ctrlSt1 = 2;
                }
                break;
            case 1:
                if (!work->_keyInput) {
                    float *speeds = static_cast<float *>(work->_pdMoveDataList->_data);
                    fn_8030A1F4(forward, 2, speeds[0], speeds[1], mc.zero);
                    work->_ctrlSt1 = 2;
                }
                break;
            case 2:
                if (work->_keyInput == true) {
                    float *speeds = static_cast<float *>(work->_pdMoveDataList->_data);
                    fn_8030A1F4(forward, 0, speeds[2], speeds[3], mc.zero);
                    work->_ctrlSt1 = 1;
                }
                break;
            }
            break;
        }
        case 2:
            if (work->_keyInput == true) setString(work->_keyEventName, mc.SQ_WALK);
            break;
        case 3:
            if (!work->_keyInput) setString(work->_keyEventName, mc.SQ_WAIT);
            break;
        }
    }
    if (strcmp(work->_keyEventName, mc.SQ_NONE) != 0 && strcmp(work->_keyEventName, work->_seqCodeName) != 0)
        virtuals(self)->handleMessage(ram, work->_keyEventName);
}

// A Lua ACTION command: sent to the ACTION manager for this RAM.
bool fn_8030943C(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, igNamedObject *command)
{
    const char *name = nameOrEmpty(command);
    int ramNo = ram->_ramNo;
    fn_80305ED0(self->_messenger, kACTION, nameOrEmpty(info), ramNo, name);
    return true;
}

// Rides on a model: asks its controller for its matrix and keeps the model and the matrix.
void fn_8030949C(beModelCtrlInfoRideOn *rideOn, const char *modelName, int ramNo, beMessenger *messenger)
{
    fn_80305ED0(messenger, kMODELCTRL, modelName, ramNo, kGETMATRIX);
    beModelCtrlNode2 *node = static_cast<beModelCtrlNode2 *>(fn_80306FB4(messenger, 0));
    float matrix[16];
    fn_80128CF4(matrix, node->_m);
    setString(rideOn->_modelName, modelName);
    rideOn->_modelRamNo = ramNo;
    setRef(rideOn->_modelNode, node);
    fn_80128CF4(rideOn->_oldMatrix, matrix);
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

// Runs a model's Lua hit script "<script>_<info name>.lua" with the hit context set; the script may change the
// model's HP through the context.
void fn_8030B6EC(beModelCtrl *self, beBaseInfoRam *ram, const char *script, const char *kind, const char *infoName, int a, int b, const char *c, int d, int e)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, kONE);
    beModelCtrlInfoWork *work = data->_work;
    ModelLuaContext *context = &lbl_80535914;
    context->ram = ram;
    context->ramNo = ram->_ramNo;
    context->matrix = data->_node->_m;
    context->maxHp = work->_mHp->_data;
    int hp = work->_hp->_data;
    context->hp = hp;
    context->recNo = work->_recNo;
    context->infoName = infoName;
    context->argument1C = a;
    context->argument20 = b;
    context->argument24 = c;
    context->argument28 = d;
    context->argument2C = e;
    context->isSet = true;
    context->kind = kind;
    char file[36];
    sprintf(file, kLuaFileFormat, script, infoName);
    fn_80301FA4(self->_luaManager, file, 0);
    if (hp == work->_hp->_data) work->_hp->_data = context->hp;
}

// Appends a new move object to the work's list; move holds it.
static inline void addMoveObject(beModelCtrl *self, beModelCtrlInfoWork *work, Ref<beModelCtrlMoveObject> &move)
{
    void *pool = poolFor(self, lbl_8056225C);
    move.releaseHeld();
    move._object = beModelCtrlMoveObject_create(pool);
    fn_80069128(work->_moveObjectList, move._object);
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

// Sets a label: the sequence it belongs to and its name, with no offset yet (-1). The first label creates the
// three lists.
void fn_8030B014(beModelCtrl *self, beBaseInfoRam *, beModelCtrlInfoWork *work, const char *sequence, const char *label)
{
    igStringRefList *sequences = work->_labelSeqList;
    igStringRefList *names = work->_labelNameList;
    igIntList *offsets = work->_labelOffsetList;
    if (!work->_labelSeqList) {
        Ref<igStringRefList> strings(0, Ref<igStringRefList>::adopt);
        Ref<igIntList> ints(0, Ref<igIntList>::adopt);
        void *pool = poolFor(self, lbl_8056225C);
        strings.releaseHeld();
        strings._object = igStringRefList_create(pool);
        setRef(work->_labelSeqList, strings._object);
        sequences = strings;
        pool = poolFor(self, lbl_8056225C);
        strings.releaseHeld();
        strings._object = igStringRefList_create(pool);
        setRef(work->_labelNameList, strings._object);
        names = strings;
        pool = poolFor(self, lbl_8056225C);
        ints.releaseHeld();
        ints._object = igIntList_create(pool);
        setRef(work->_labelOffsetList, ints._object);
        offsets = ints;
    }
    int index;
    {
        POOLED_REF(key, sequence);
        index = fn_8004270C(sequences, &key, 0);
    }
    if (index != -1) {
        {
            POOLED_REF(value, sequence);
            setStringAt(sequences, index, value);
        }
        {
            POOLED_REF(value, label);
            setStringAt(names, index, value);
        }
        setValueAt<int>(offsets, index, lbl_804DEBA4[0]);
    } else {
        fn_8002080C(sequences, igStringRef(pooledOrNull(sequence)));
        fn_8002080C(names, igStringRef(pooledOrNull(label)));
        appendInt(offsets, lbl_804DEBA8[0]);
    }
}

// A LABELCTRL command: sets a label of a sequence.
bool fn_8030B6B0(beModelCtrl *self, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlLABELCTRL *command)
{
    fn_8030B014(self, ram, work, command->_seqName, nameOrEmpty(command));
    return true;
}

// A LUACALL command: BHit, WHit and FHit name the scripts for body, wall and floor hits; any other mode (or none)
// runs the script now, with the mode as its kind.
bool fn_8030B8A4(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlLUACALL *command)
{
    const beModelCtrlPool &mc = MC;
    bool run = false;
    if (!command->_modeName) run = true;
    else if (strcmp(command->_modeName, mc.BHit) == 0) setString(work->_luaBHit, nameOrEmpty(command));
    else if (strcmp(command->_modeName, mc.WHit) == 0) setString(work->_luaWHit, nameOrEmpty(command));
    else if (strcmp(command->_modeName, mc.FHit) == 0) setString(work->_luaFHit, nameOrEmpty(command));
    else run = true;
    if (run) {
        const char *infoName = nameOrEmpty(info);
        const char *mode = command->_modeName;
        fn_8030B6EC(self, ram, nameOrEmpty(command), mode, infoName, 0, 0, 0, 0, 0);
    }
    return true;
}

// An AIMAP command: selects the AI's map by name. A map aimed at a world position asks the "aim" Lua script for
// it (kind WPos), which writes it through the hit context. The AI timer restarts.
bool fn_8030BB3C(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work, igNamedObject *command)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfoDataAIM *aim = static_cast<beModelCtrlInfoDataAIM *>(fn_800695CC(info->_dataList, nameField(), mc.AIM));
    beModelCtrlAIMapList *maps = aim->_aIMapList;
    beModelCtrlAIMap *map = static_cast<beModelCtrlAIMap *>(fn_800695CC(maps, nameField(), nameOrEmpty(command)));
    int index = indexOf(maps, &map, 0);
    if (work->_aI) {
        work->_aI->_mapNo = index;
        if (map->_targetType && strcmp(map->_targetType, mc.WPOS) == 0) {
            ModelLuaContext *context = &lbl_80535914;
            Vec3 position;
            context->position = &position.x;
            fn_8030B6EC(self, ram, mc.aim, mc.WPos, nameOrEmpty(info), 0, 0, 0, 0, 0);
            *reinterpret_cast<Vec3 *>(work->_aI->_worldPos) = position;
            context->position = 0;
        }
    }
    fn_8031E8BC(ram, mc.AITIMER);
    return true;
}

// An MSGBOX command: nothing to do here.
bool fn_8030BCB0(beModelCtrl *, beModelCtrlInfo *, beModelCtrlInfoWork *, igNamedObject *) { return true; }

// A SEQ command: plays the named sequence.
bool fn_8030BCB8(beModelCtrl *self, beBaseInfoRam *ram, igNamedObject *command)
{
    virtuals(self)->handleMessage(ram, nameOrEmpty(command));
    return true;
}

// A WCHECK command: the next commands wait until the named check passes (TurnY, Landing, Action, Moving,
// Rotation).
bool fn_8030BCFC(beModelCtrl *, beModelCtrlInfoWork *work, igNamedObject *command)
{
    setString(work->_wCheckName, nameOrEmpty(command));
    return false;
}

// The wait check: TurnY and Landing wait for the vertical move, Action for the ACTION manager's command to
// end, Moving for the translations and Rotation for the turn; then the commands continue. Without a check the
// subclass's step runs (virtual 0xA4).
void fn_8030BDB8(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    const beModelCtrlPool &mc = MC;
    if (strcmp(work->_wCheckName, mc.TurnY) == 0 || strcmp(work->_wCheckName, mc.Landing) == 0) {
        if (!fn_8030A0A0(self, ram, work, 2)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else if (strcmp(work->_wCheckName, mc.Action) == 0) {
        int ramNo = ram->_ramNo;
        fn_80305ED0(self->_messenger, mc.ACTION, nameOrEmpty(info), ramNo, mc.ISCOMEND);
        if (fn_80306A1C(self->_messenger, 0)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else if (strcmp(work->_wCheckName, mc.Moving) == 0) {
        if (!fn_8030A0A0(self, ram, work, 0)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else if (strcmp(work->_wCheckName, mc.Rotation) == 0) {
        if (!fn_8030A0A0(self, ram, work, 1)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else {
        virtuals(self)->step(ram);
    }
}

// A HITBOX command: AllClear removes the hit-box subcommands, Set adds one.
bool fn_8030C134(beModelCtrl *, beBaseInfoRam *ram, beModelCtrlInfoWork *work, igNamedObject *command)
{
    if (strcmp(nameOrEmpty(command), kAllClear) == 0) fn_80310A68(work->_subCommand, ram, metaVar(beModelCtrlSCHitBox_meta));
    else if (strcmp(nameOrEmpty(command), kSet) == 0) fn_80310DAC(work->_subCommand, command);
    return true;
}

// A MUTEKI command: OFFWALL, ONWALL, OFFFLOOR and ONFLOOR switch the wall and floor checks; any other name makes
// the model invincible for the command's frames.
bool fn_8030C1F0(beModelCtrl *, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlMUTEKI *command)
{
    const beModelCtrlPool &mc = MC;
    if (!fn_8031E138(ram, mc.KEIKATIMER)) fn_8031DE44(ram, mc.KEIKATIMER, 0);
    if (strcmp(nameOrEmpty(command), mc.OFFWALL) == 0) work->_isWallCheck = false;
    else if (strcmp(nameOrEmpty(command), mc.ONWALL) == 0) work->_isWallCheck = true;
    else if (strcmp(nameOrEmpty(command), mc.OFFFLOOR) == 0) work->_isFloorCheck = false;
    else if (strcmp(nameOrEmpty(command), mc.ONFLOOR) == 0) work->_isFloorCheck = true;
    else work->_mutekiCount = command->_frame;
    return true;
}

// Counts the invincibility frames down.
void fn_8030C334(beModelCtrl *, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    float count = work->_mutekiCount;
    if (count > kZero) {
        float left = count - fn_8031E4C4(ram, kKEIKATIMER);
        if (left < kZero) left = kZero;
        work->_mutekiCount = left;
    }
}

// Runs the current sequence's commands from the command index, each by its class, until one waits (returns
// false) or a JUMP plays another sequence. A LABEL waits once.
void fn_8030C3AC(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    bool jumped = false;
    int index = work->_comIndex;
    beModelCtrlData *data = work->_comData;
    while (index != data->_comList->_count) {
        igNamedObject *command = item<igNamedObject>(data->_comList, index);
        bool next = true;
        if (isA(command, beModelCtrlCTRL_meta)) {
            next = fn_80308EC0(self, work, command);
            index++;
        } else if (isA(command, beModelCtrlACTION_meta)) {
            next = fn_8030943C(self, info, ram, command);
            index++;
        } else if (isA(command, beModelCtrlMOVE_meta)) {
            next = fn_8030A6BC(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMOVEEX_meta)) {
            next = fn_8030A6BC(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMOVERL_meta)) {
            next = fn_8030A6BC(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlPDMOVE_meta)) {
            next = fn_8030AEE0(self, ram, work, static_cast<beModelCtrlPDMOVE *>(command));
            index++;
        } else if (isA(command, beModelCtrlWCHECK_meta)) {
            next = fn_8030BCFC(self, work, command);
            index++;
        } else if (isA(command, beModelCtrlHITBOX_meta)) {
            next = fn_8030C134(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMUTEKI_meta)) {
            next = fn_8030C1F0(self, ram, work, static_cast<beModelCtrlMUTEKI *>(command));
            index++;
        } else if (isA(command, beModelCtrlLABELCTRL_meta)) {
            next = fn_8030B6B0(self, ram, work, static_cast<beModelCtrlLABELCTRL *>(command));
            index++;
        } else if (isA(command, beModelCtrlLUACALL_meta)) {
            next = fn_8030B8A4(self, info, ram, work, static_cast<beModelCtrlLUACALL *>(command));
            index++;
        } else if (isA(command, beModelCtrlAIMAP_meta)) {
            next = fn_8030BB3C(self, info, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMSGBOX_meta)) {
            next = fn_8030BCB0(self, info, work, command);
            index++;
        } else if (isA(command, beModelCtrlLABEL_meta)) {
            if (work->_comLabelCount != 0) {
                next = false;
            } else {
                index++;
                work->_comLabelCount = 1;
            }
        } else if (isA(command, beModelCtrlJUMP_meta)) {
            jumped = fn_8030BCB8(self, ram, command);
        }
        if (jumped || !next) break;
    }
    if (!jumped) work->_comIndex = index;
}

// Whether two vectors differ.
static inline bool differs(const float *a, const float *b) { return a[0] != b[0] || a[1] != b[1] || a[2] != b[2]; }

// Turns the model's direction toward its target direction, each axis by at most its limiter per frame the
// shorter way round (immediately when immediate is set or the limiter is 0), and rotates its node to match.
void fn_8030C85C(beModelCtrl *, beModelCtrlInfo *, beBaseInfoRam *ram, beModelCtrlInfoWork *work, bool immediate)
{
    const beModelCtrlPool &mc = MC;
    float direction[3];
    direction[0] = work->_targetDirection[0];
    direction[1] = work->_targetDirection[1];
    direction[2] = work->_targetDirection[2];
    if (!immediate) {
        for (int i = 0; i < 3; i++) {
            float current = work->_direction[i];
            if (current == work->_targetDirection[i]) continue;
            if (mc.zero == work->_directionLimiter[i]) {
                direction[i] = current;
                continue;
            }
            float step = work->_directionLimiter[i] * fn_8031E4C4(ram, mc.KEIKATIMER);
            float from = work->_direction[i];
            float to = work->_targetDirection[i];
            while (from < mc.zero) from += mc.twoPi;
            while (from >= mc.twoPi) from -= mc.twoPi;
            while (to < mc.zero) to += mc.twoPi;
            while (to >= mc.twoPi) to -= mc.twoPi;
            float up, down;
            if (from <= to) {
                down = from - (to - mc.twoPi);
                up = to - from;
            } else {
                down = from - to;
                up = to + mc.twoPi - from;
            }
            float turned;
            if (up < down) turned = up > step ? from + step : to;
            else turned = down > step ? from - step : to;
            direction[i] = turned;
        }
    }
    if (immediate || differs(direction, work->_direction)) {
        float *matrix = ramDataOf(ram, mc.ONE)->_node->_m;
        float translation[3];
        fn_80128DAC(matrix, translation);
        fn_80129134(matrix, direction[0], direction[1], direction[2]);
        fn_80128D90(matrix, translation);
        work->_direction[0] = direction[0];
        work->_direction[1] = direction[1];
        work->_direction[2] = direction[2];
    }
}

// The per-frame update of a running model RAM (virtual 0x84): a model whose sequence ended (SQ_ERAS) is removed;
// otherwise the control state and the AI run, then the model moves (or follows its position lock: a node, a
// recorded path, or another model's bone), carries along what it rides on, and runs its checks.
void fn_8030CB2C(beModelCtrl *self, beBaseInfoRam *ram)
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

// Places a new model RAM from its request's arguments: the model it goes on (name and RAM number), an offset and
// an optional rotation (angles), whether it stays locked to that model, and its hit parent (name and RAM number).
void fn_8030D260(beModelCtrl *self, beBaseInfoRam *ram)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfoRamData *data = ramDataOf(ram, mc.ONE);
    beModelCtrlInfoWork *work = data->_work;
    if (fn_80306FCC(self->_messenger) == 0) return;
    if (fn_80306FCC(self->_messenger) == 1) return;
    const char *name = fn_8030709C(self->_messenger, 0);
    int ramNo = fn_80306B00(self->_messenger, 0);
    Vec3f offset(fn_80306D28(self->_messenger, 0));
    const Vec3f &rotation = fn_80306C74(self->_messenger) == 2 ? fn_80306D28(self->_messenger, 1) : *reinterpret_cast<Vec3f *>(lbl_804F8AE0);
    float angleX = rotation.x, angleY = rotation.y, angleZ = rotation.z;
    bool lock = fn_80306A1C(self->_messenger, 0);
    setString(work->_hitParentName, fn_8030709C(self->_messenger, 2));
    work->_hitParentRamNo = fn_80306B00(self->_messenger, 1);
    fn_80305ED0(self->_messenger, mc.MODELCTRL, name, ramNo, mc.GETMATRIX);
    if (lock) {
        setRef(work->_posLockNode, static_cast<beModelCtrlNode2 *>(fn_80306FB4(self->_messenger, 0)));
        work->_posLockOffset[0] = offset.x;
        work->_posLockOffset[1] = offset.y;
        work->_posLockOffset[2] = offset.z;
        work->_isPosLock = true;
    }
    Matrix44 matrix;
    matrix = fn_80306DE8(self->_messenger, 0);
    fn_80128DC8(matrix.m, &offset.x);
    if (mc.zero != angleX) fn_801298F0(matrix.m, lbl_804F8AF8, angleX);
    if (mc.zero != angleY) fn_801298F0(matrix.m, lbl_804F8B04, angleY);
    if (mc.zero != angleZ) fn_801298F0(matrix.m, lbl_804F8B10, angleZ);
    setMatrix(data->_node, matrix.m);
    work->_aIHOffsetY = offset.y;
}

// Moves a model RAM as a message says: to a position (and rotation in degrees), or to a matrix.
void fn_8030D610(beModelCtrl *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, kONE);
    if (fn_80306C74(self->_messenger) != 0) {
        Matrix44 matrix(data->_node->_m);
        fn_80128D90(matrix.m, &fn_80306D28(self->_messenger, 0).x);
        if (fn_80306C74(self->_messenger) == 2) {
            Vec3f degrees(fn_80306D28(self->_messenger, 1));
            fn_801292D4(matrix.m, kDegreesToRadians * degrees.x, kDegreesToRadians * degrees.y, kDegreesToRadians * degrees.z);
        }
        setMatrix(data->_node, matrix.m);
    } else if (fn_80306D58(self->_messenger) != 0) {
        Matrix44 matrix(fn_80306DE8(self->_messenger, 0));
        setMatrix(data->_node, matrix.m);
    }
}

// Sets a node's bound to a box moved by the node's matrix, creating the bound on first use.
void fn_8030D7F4(beModelCtrl *self, beModelCtrlNode2 *node, igAABox *box)
{
    igAABox *bound = static_cast<igAABox *>(node->_bound);
    if (!bound) {
        igAABox *created = igAABox_create(poolFor(self, lbl_8056225C));
        Ref<igAABox> holder(created);
        if (node->_bound) release(node->_bound);
        node->_bound = created;
        bound = holder;
    }
    bound->_min[0] = box->_min[0];
    bound->_min[1] = box->_min[1];
    bound->_min[2] = box->_min[2];
    bound->_max[0] = box->_max[0];
    bound->_max[1] = box->_max[1];
    bound->_max[2] = box->_max[2];
    fn_80122D04(bound, node->_m);
}

// The model controller's messages (MsgAction), for a RAM. The subclass sees each message first; anything that is
// not a message (and GENERATE_NDSP) is a sequence name to play: SQ_ERAS ends the model, SQ_ERAS2 hides it, and any
// other sequence restarts the model's commands.
bool fn_8030D910(beModelCtrl *self, beBaseInfoRam *ram, const char *message)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfo *info = static_cast<beModelCtrlInfo *>(ram->_parentInfo);
    beModelCtrlInfoRamData *data = static_cast<beModelCtrlInfoRamData *>(fn_8030F8CC(ram, mc.ONE));
    beModelCtrlInfoWork *work = data->_work;
    if (virtuals(self)->subclassMessage(ram, message) == true) return true;
    switch (fn_80304FD8(self->_messenger, fn_802CCD64(), message)) {
    case MSG_GENERATE: {
        // Starts the model: the sequence to play is the request's first string (or its second when it has more).
        igStringRef sequence;
        ram->_isRun = true;
        ram->_st0 = 0;
        ram->_st3 = 0;
        ram->_st2 = 0;
        ram->_st1 = 0;
        if (fn_80306FCC(self->_messenger) == 1) fn_8030F818(&sequence, fn_8030709C(self->_messenger, 0));
        else if (fn_80306FCC(self->_messenger) >= 2) fn_8030F818(&sequence, fn_8030709C(self->_messenger, 1));
        virtuals(self)->makeWork(ram);
        beModelCtrlInfoWork *newWork = data->_work;
        if (newWork->_mHp->_data == 0) {
            newWork->_mHp->_data = 100;
            newWork->_hp->_data = 100;
        }
        fn_8030F7A8(newWork, static_cast<igAABox *>(item<igNode>(data->_node->_childList, 0)->_bound));
        fn_8030F738(data->_node, 0);
        float forward[3];
        fn_8012D434(forward, lbl_804F8B10, data->_node->_m);
        newWork->_targetDirection[1] = newWork->_direction[1] = atan2(forward[0], forward[2]);
        if (fn_800695CC(info->_dataList, nameField(), mc.AIM) || fn_800695CC(info->_dataList, nameField(), mc.AIH)) {
            Ref<beModelCtrlInfoAI> ai(beModelCtrlInfoAI_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlInfoAI>::adopt);
            fn_8030F6C8(newWork, ai);
        }
        if (!sequence.getString()) virtuals(self)->handleMessage(ram, mc.SQ_WAIT);
        else virtuals(self)->handleMessage(ram, sequence.getString());
        if (newWork->_baseAABox) fn_8030D7F4(self, data->_node, newWork->_baseAABox);
        return true;
    }
    case MSG_REMOVE:
        if (ram->_isRun) {
            virtuals(self)->removing(ram);
            fn_80306604(self->_messenger);
            int ramNo = ram->_ramNo;
            fn_80305ED0(self->_messenger, mc.ACTION, nameOrEmpty(info), ramNo, mc.NDSP);
            if (work) fn_803108A0(work->_subCommand, ram);
            fn_8030F654(data, 0);
            fn_8030F738(data->_node, 0);
            fn_8031EA54(ram);
            ram->_isRun = false;
            fn_803067A0(self->_messenger);
        }
        return true;
    case MSG_ISRUN: {
        bool run = ram->_isRun;
        fn_80306964(self->_messenger, run);
    }
        return true;
    case MSG_ISSEQNAME:
        if (!ram->_isRun) fn_80306964(self->_messenger, false);
        else if (!work) fn_80306964(self->_messenger, false);
        else {
            const char *name = fn_8030709C(self->_messenger, 0);
            if (strcmp(work->_seqCodeName, name) == 0) fn_80306964(self->_messenger, true);
            else fn_80306964(self->_messenger, false);
        }
        return true;
    case MSG_SETEFFECT:
        if (ram->_isRun && work) {
            const Vec3f &rotation = Vec3f(fn_80306C74(self->_messenger) == 2 ? fn_80306D28(self->_messenger, 1) : *reinterpret_cast<Vec3f *>(lbl_804F8AE0));
            beModelCtrlSubCom *subCommand = work->_subCommand;
            bool flag1 = fn_80306A1C(self->_messenger, 1);
            bool flag0 = fn_80306A1C(self->_messenger, 0);
            const Vec3f &offset = fn_80306D28(self->_messenger, 0);
            float value = fn_80306BA0(self->_messenger, 0);
            const char *sequence = fn_8030709C(self->_messenger, 1);
            fn_80310B50(subCommand, fn_8030709C(self->_messenger, 0), sequence, &offset.x, &rotation.x, flag0, flag1, value);
        }
        return true;
    case MSG_SETSOUND:
        if (ram->_isRun && work) {
            beModelCtrlSubCom *subCommand = work->_subCommand;
            float value = fn_80306BA0(self->_messenger, 0);
            fn_80310FAC(subCommand, fn_8030709C(self->_messenger, 0), value);
        }
        return true;
    case MSG_GETSEQNAMELIST: {
        // Replies SQ_ERAS and the names of the info's sequences.
        igNamedObjectList *sequences = static_cast<beModelCtrlInfoDataSeq *>(fn_800695CC(info->_dataList, nameField(), mc.SEQ))->_dataList;
        int count = sequences->_count;
        fn_80306FDC(self->_messenger, mc.SQ_ERAS);
        for (int i = 0; i < count; i++) fn_80306FDC(self->_messenger, nameOrEmpty(item<igNamedObject>(sequences, i)));
        return true;
    }
    case MSG_ONHITBULLETBOX:
        self->_isDebugHitBox = true;
        return true;
    case MSG_OFHITBULLETBOX:
        self->_isDebugHitBox = false;
        return true;
    case MSG_GETINFONAME:
        fn_80306FDC(self->_messenger, nameOrEmpty(info));
        return true;
    case MSG_GETINFONAME_RUN:
        if (ram->_isRun) fn_80306FDC(self->_messenger, nameOrEmpty(info));
        return true;
    case MSG_SETMATRIX:
        if (ram->_isRun && work && fn_80306D58(self->_messenger) != 0) {
            Matrix44 matrix(fn_80306DE8(self->_messenger, 0));
            setMatrix(data->_node, matrix.m);
            if (work) {
                float forward[3];
                fn_8012D434(forward, lbl_804F8B10, matrix.m);
                work->_targetDirection[1] = work->_direction[1] = atan2(forward[0], forward[2]);
            }
            if (work->_baseAABox) fn_8030D7F4(self, data->_node, work->_baseAABox);
        }
        return true;
    case MSG_GETMATRIX:
        if (!ram->_isRun) return true;
    case MSG_GETMATRIX_ALL:
        fn_80306A40(self->_messenger, ram->_ramNo);
        fn_80306D68(self->_messenger, data->_node->_m);
        fn_80306E2C(self->_messenger, data->_node);
        return true;
    case MSG_GETMATRIX_ACTIVE:
        if (ram->_isRun && work && mc.zero == work->_mutekiCount) fn_80306D68(self->_messenger, data->_node->_m);
        return true;
    case MSG_GETTRCDATA:
        if (ram->_isRun) {
            beBaseInfoData *trc = fn_8030F8CC(ram, mc.TRC);
            if (trc) fn_80306E2C(self->_messenger, trc);
        }
        return true;
    case MSG_ONCTRL:
        if (ram->_isRun && work) work->_isOnCtrl = true;
        return true;
    case MSG_OFCTRL:
        if (ram->_isRun && work) {
            work->_isOnCtrl = false;
            virtuals(self)->controlOff(ram);
        }
        return true;
    case MSG_ONFREEZE:
        if (ram->_isRun && work) {
            fn_8031E808(ram, mc.zero);
            int ramNo = ram->_ramNo;
            fn_80305ED0(self->_messenger, mc.ACTION, nameOrEmpty(info), ramNo, mc.ONFREEZE);
            work->_isOnFreeze = true;
            virtuals(self)->frozen(ram);
        }
        return true;
    case MSG_OFFREEZE:
        if (ram->_isRun && work) {
            fn_8031E808(ram, mc.one);
            int ramNo = ram->_ramNo;
            fn_80305ED0(self->_messenger, mc.ACTION, nameOrEmpty(info), ramNo, mc.OFFREEZE);
            work->_isOnFreeze = false;
        }
        return true;
    case MSG_SETLODHIGH:
        // Forces the highest level of detail of a three-level model, keeping its range.
        if (ram->_isRun && work && mc.minusOne == work->_svLODHighRange) {
            igLod *lod = item<igLod>(data->_node->_childList, 0);
            if (isA(lod, igLod_meta)) {
                int levels = lod->_childList ? lod->_childList->_count : 0;
                if (levels == 3) {
                    igFloatList *ranges = lod->_rangeList;
                    work->_svLODHighRange = static_cast<float *>(ranges->_data)[2];
                    setValueAt(ranges, 2, lbl_804DEBAC[0]);
                    reinterpret_cast<igLodVirtuals *>(lod)->rangesChanged();
                }
            }
        }
        return true;
    case MSG_RESETLODHIGH:
        if (ram->_isRun && work && mc.minusOne != work->_svLODHighRange) {
            igLod *lod = item<igLod>(data->_node->_childList, 0);
            setValueAt(lod->_rangeList, 2, work->_svLODHighRange);
            work->_svLODHighRange = mc.minusOne;
            reinterpret_cast<igLodVirtuals *>(lod)->rangesChanged();
        }
        return true;
    case MSG_MOVETRANS:
        // Moves the model to a position and rotation (degrees), turning at once.
        if (ram->_isRun && work) {
            Vec3f position(fn_80306D28(self->_messenger, 0));
            const Vec3f &degrees = fn_80306D28(self->_messenger, 1);
            float x = degrees.x, y = degrees.y, z = degrees.z;
            Matrix44 matrix;
            fn_80128D38(matrix.m, &position.x);
            if (mc.zero != x) fn_801298F0(matrix.m, lbl_804F8AF8, mc.degreesToRadians * x);
            if (mc.zero != y) fn_801298F0(matrix.m, lbl_804F8B04, mc.degreesToRadians * y);
            if (mc.zero != z) fn_801298F0(matrix.m, lbl_804F8B10, mc.degreesToRadians * z);
            setMatrix(data->_node, matrix.m);
            work->_targetDirection[1] = mc.degreesToRadians * y;
            fn_8030C85C(self, info, ram, work, true);
            if (work->_baseAABox) fn_8030D7F4(self, data->_node, work->_baseAABox);
        }
        return true;
    case MSG_SETLABEL:
        if (ram->_isRun && work) {
            const char *sequence = fn_8030709C(self->_messenger, 0);
            const char *label = fn_8030709C(self->_messenger, 1);
            fn_8030B014(self, ram, work, sequence, label);
        }
        return true;
    case MSG_GETHP:
        if (!ram->_isRun) fn_80306A40(self->_messenger, 0);
        else if (!work) fn_80306A40(self->_messenger, 0);
        else {
            fn_80306A40(self->_messenger, work->_hp->_data);
            fn_80306E2C(self->_messenger, work->_hp);
            fn_80306E2C(self->_messenger, work->_mHp);
        }
        return true;
    case MSG_SETHP:
        if (ram->_isRun && work) {
            int hp = fn_80306B00(self->_messenger, 0);
            work->_hp->_data = hp;
            if (work->_mHp->_data < hp) work->_mHp->_data = hp;
        }
        return true;
    case MSG_GETRECNO:
        if (ram->_isRun && work) fn_80306A40(self->_messenger, work->_recNo);
        return true;
    case MSG_CHKBULLET: {
        // A bullet (its box, matrix, info name and owner) against the model's hit boxes. An invincible model is
        // only hit by a player's bullet when it is a player itself. A hit runs the "hit" script with the bullet's
        // details; unless the script clears the context flag, the model turns toward the bullet.
        if (mc.zero != work->_mutekiCount) {
            bool playerHit = false;
            if (nameOrEmpty(info)[0] == 'p' && fn_8030709C(self->_messenger, 0)[0] == 'p' && work->_hp) playerHit = true;
            if (!playerHit) return true;
        }
        if (!work->_isOnCtrl || strcmp(work->_seqCodeName, mc.SQ_ERAS) == 0) return true;
        beModelCtrlInfoHitBody *body = work->_hitBody;
        if (!work->_hitBody) {
            Ref<beModelCtrlInfoHitBody> created(beModelCtrlInfoHitBody_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlInfoHitBody>::adopt);
            fn_8030F5DC(work, created);
            body = created;
        }
        igAABox *bullet = static_cast<igAABox *>(fn_80306FB4(self->_messenger, 0));
        igDataList *boxes = fn_80307EAC(body, ram, data->_node->_m, self->_insight->_worldTime);
        int count = boxes->_count;
        bool hit = false;
        int hitBox;
        for (int i = 0; i < count; i++) {
            if (fn_8012305C(item<igAABox>(boxes, i), bullet)) {
                hitBox = i;
                hit = true;
                break;
            }
        }
        if (hit) {
            int bulletRamNo = fn_80306B00(self->_messenger, 0);
            Matrix44 bulletMatrix(fn_80306DE8(self->_messenger, 0));
            const char *bulletName = fn_8030709C(self->_messenger, 0);
            int ownerRamNo = fn_80306B00(self->_messenger, 1);
            int ownerRecNo = -1;
            float bulletPosition[3];
            fn_80128DAC(bulletMatrix.m, bulletPosition);
            float position[3];
            fn_80128DAC(data->_node->_m, position);
            fn_80306604(self->_messenger);
            if (bulletName[0] != 'p') {
                fn_80305ED0(self->_messenger, mc.MODELCTRL, bulletName, ownerRamNo, mc.GETRECNO);
                if (fn_80306A30(self->_messenger) == 1) ownerRecNo = fn_80306B00(self->_messenger, 0);
                else ownerRecNo = -9;
            }
            if (ownerRecNo != -9) {
                fn_8030B6EC(self, ram, mc.hit, mc.Hit, nameOrEmpty(info), bulletRamNo, hitBox, bulletName, ownerRamNo, ownerRecNo);
                if (lbl_80535914.isSet) {
                    work->_targetDirection[1] = atan2(bulletPosition[0] - position[0], bulletPosition[2] - position[2]);
                    fn_8030C85C(self, info, ram, work, true);
                }
            }
            fn_803067A0(self->_messenger);
            if (fn_8030690C(self->_messenger) == 0) fn_80306964(self->_messenger, true);
        }
        return true;
    }
    default:
        if (ram->_isRun) {
            if (strcmp(message, mc.SQ_ERAS) == 0) {
                virtuals(self)->erasing(ram);
                fn_8030F530(work, mc.SQ_ERAS);
            } else if (strcmp(message, mc.SQ_ERAS2) == 0) {
                fn_80306604(self->_messenger);
                int ramNo = ram->_ramNo;
                fn_80305ED0(self->_messenger, mc.ACTION, nameOrEmpty(info), ramNo, mc.NDSP);
                if (work) fn_803108A0(work->_subCommand, ram);
                fn_8030F738(data->_node, 0);
                fn_8031EA54(ram);
                fn_803067A0(self->_messenger);
            } else {
                beModelCtrlInfoDataSeq *sequences = static_cast<beModelCtrlInfoDataSeq *>(fn_800695CC(info->_dataList, nameField(), mc.SEQ));
                beModelCtrlData *commands = static_cast<beModelCtrlData *>(fn_800695CC(sequences->_dataList, nameField(), message));
                fn_8030F530(work, message);
                fn_8030F4C0(work, commands);
                work->_comIndex = fn_8030D084(self, work);
                work->_comLabelCount = 0;
                work->_ctrlSt0 = 0;
                work->_ctrlSt1 = 0;
                work->_ctrlSt1 = 0;
                work->_pdMoveDataList->_count = 0;
                fn_8030F418(work, 0);
                fn_803108A0(work->_subCommand, ram);
                fn_8030F370(work, 0);
                fn_8030F2C8(work, 0);
                fn_8030F220(work, 0);
                work->_isWallCheck = true;
                work->_isFloorCheck = true;
                work->_isFallCheck = true;
                if (mc.zero > work->_mutekiCount) work->_mutekiCount = mc.zero;
                // The new sequence stops the turn and ends the moves that stop with a sequence.
                bool off = false;
                float zero = mc.zero;
                int count = work->_moveObjectList->_count;
                for (int i = 0; i < count; i++) {
                    beModelCtrlMoveObject *move = item<beModelCtrlMoveObject>(work->_moveObjectList, i);
                    if (i != 3) {
                        if (move->_isSeqStop) fn_8030A254(move);
                    } else {
                        move->_isRun = off;
                        move->_speed = zero;
                    }
                }
                fn_8030C3AC(self, info, ram, work);
                virtuals(self)->sequenceStarted(ram);
            }
        }
        return true;
    case MSG_ACTION1:
        virtuals(self)->action1(ram);
        return true;
    case MSG_SETCONVEYOR:
        // A conveyor: the model rides on a new node at its place, carried along a vector.
        if (work) {
            if (fn_80306B00(self->_messenger, 0) != 0) {
                if (!work->_rideOnData) {
                    Ref<beModelCtrlInfoRideOn2> conveyor(beModelCtrlInfoRideOn2_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlInfoRideOn2>::adopt);
                    float *matrix = data->_node->_m;
                    {
                        Ref<beModelCtrlNode2> node(beModelCtrlNode2_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlNode2>::adopt);
                        setMatrix(node, matrix);
                        fn_8030F134(conveyor, node);
                    }
                    fn_80128CF4(conveyor->_oldMatrix, matrix);
                    *reinterpret_cast<Vec3 *>(conveyor->_vector) = asVec3(fn_80306D28(self->_messenger, 0));
                    fn_8030F0C4(work, conveyor);
                }
            } else {
                fn_8030F0C4(work, 0);
            }
        }
        return true;
    case MSG_SETQUICKSAND:
        // Quicksand: the model is drawn toward a world position, faster when nearer (speeds and distances).
        if (work) {
            if (fn_80306B00(self->_messenger, 0) != 0) {
                if (!work->_rideOnData) {
                    Ref<beModelCtrlInfoRideOn3> sand(beModelCtrlInfoRideOn3_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlInfoRideOn3>::adopt);
                    float position[3];
                    fn_80128DAC(data->_node->_m, position);
                    Matrix44 matrix(lbl_804F89B8);
                    fn_80128D90(matrix.m, position);
                    {
                        Ref<beModelCtrlNode2> node(beModelCtrlNode2_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlNode2>::adopt);
                        setMatrix(node, matrix.m);
                        fn_8030F134(sand, node);
                    }
                    fn_80128CF4(sand->_oldMatrix, matrix.m);
                    *reinterpret_cast<Vec3 *>(sand->_worldPosition) = asVec3(fn_80306D28(self->_messenger, 0));
                    sand->_minKyori = fn_80306BA0(self->_messenger, 0);
                    sand->_maxKyori = fn_80306BA0(self->_messenger, 1);
                    sand->_minSpeed = fn_80306BA0(self->_messenger, 2);
                    sand->_maxSpeed = fn_80306BA0(self->_messenger, 3);
                    fn_8030F0C4(work, sand);
                }
            } else {
                fn_8030F0C4(work, 0);
            }
        }
        return true;
    case MSG_SETSLIPPEDFLOOR:
        // A slippery floor: the model keeps sliding (scalar and limiter).
        if (work) {
            if (fn_80306B00(self->_messenger, 0) != 0) {
                if (!work->_rideOnData) {
                    Ref<beModelCtrlInfoRideOn4> floor(beModelCtrlInfoRideOn4_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlInfoRideOn4>::adopt);
                    float position[3];
                    fn_80128DAC(data->_node->_m, position);
                    Matrix44 matrix(lbl_804F89B8);
                    fn_80128D90(matrix.m, position);
                    {
                        Ref<beModelCtrlNode2> node(beModelCtrlNode2_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlNode2>::adopt);
                        setMatrix(node, matrix.m);
                        fn_8030F134(floor, node);
                    }
                    fn_80128CF4(floor->_oldMatrix, matrix.m);
                    position[1] = mc.zero;
                    floor->_oldPlayerPos[0] = position[0];
                    floor->_oldPlayerPos[1] = position[1];
                    floor->_oldPlayerPos[2] = position[2];
                    *reinterpret_cast<Vec3 *>(floor->_vector) = *reinterpret_cast<Vec3 *>(lbl_804F8AE0);
                    floor->_scalar = fn_80306BA0(self->_messenger, 0);
                    floor->_limitter = fn_80306BA0(self->_messenger, 1);
                    fn_8030F0C4(work, floor);
                }
            } else {
                fn_8030F0C4(work, 0);
            }
        }
        return true;
    }
}

// The base class's empty or trivial virtuals.
void fn_803084B4(beModelCtrl *, beBaseInfoRam *) {}             // 0x9C: after a RAM starts
void fn_8030C130(beModelCtrl *, beBaseInfoRam *) {}             // 0xA4: the step when no check waits
void fn_8030D080(beModelCtrl *, beBaseInfoRam *) {}             // 0xC0: before the move
void fn_8030F218(beModelCtrl *, beBaseInfoRam *) {}             // 0xBC: ACTION1
void fn_8030F21C(beModelCtrl *, beBaseInfoRam *) {}             // 0xB8: after a sequence starts
void fn_8030F5D8(beModelCtrl *, beBaseInfoRam *) {}             // 0xB4: SQ_ERAS
void fn_8030F64C(beModelCtrl *, beBaseInfoRam *) {}             // 0xAC: ONFREEZE
void fn_8030F650(beModelCtrl *, beBaseInfoRam *) {}             // 0xA8: OFCTRL
void fn_8030F6C4(beModelCtrl *, beBaseInfoRam *) {}             // 0xB0: REMOVE
bool fn_8030F8C4(beModelCtrl *, beBaseInfoRam *, const char *) { return false; }   // 0xC4: no subclass messages

// Whether a ride-on is on the given model RAM.
bool fn_803095D0(beModelCtrlInfoRideOn *rideOn, const char *modelName, int ramNo)
{
    if (strcmp(rideOn->_modelName, modelName) != 0) return false;
    return ramNo == rideOn->_modelRamNo;
}

// A conveyor (RideOn2) carries the rider along its vector.
void beModelCtrlInfoRideOn2_virtual5C(beModelCtrlInfoRideOn2 *self, float *)
{
    fn_80128D90(self->_oldMatrix, lbl_804F8AE0);
    fn_80128D90(self->_modelNode->_m, self->_vector);
}

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

// Field setters (see the header).
void fn_8030F0C4(beModelCtrlInfoWork *work, beModelCtrlInfoRideOn *rideOn) { setRef(work->_rideOnData, rideOn); }
void fn_8030F134(beModelCtrlInfoRideOn *rideOn, beModelCtrlNode2 *node) { setRef(rideOn->_modelNode, node); }
void fn_8030F220(beModelCtrlInfoWork *work, const char *script) { setString(work->_luaFHit, script); }
void fn_8030F2C8(beModelCtrlInfoWork *work, const char *script) { setString(work->_luaWHit, script); }
void fn_8030F370(beModelCtrlInfoWork *work, const char *script) { setString(work->_luaBHit, script); }
void fn_8030F418(beModelCtrlInfoWork *work, const char *check) { setString(work->_wCheckName, check); }
void fn_8030F4C0(beModelCtrlInfoWork *work, beModelCtrlData *data) { setRef(work->_comData, data); }
void fn_8030F530(beModelCtrlInfoWork *work, const char *sequence) { setString(work->_seqCodeName, sequence); }
void fn_8030F5DC(beModelCtrlInfoWork *work, beModelCtrlInfoHitBody *body) { setRef(work->_hitBody, body); }
void fn_8030F654(beModelCtrlInfoRamData *data, beModelCtrlInfoWork *work) { setRef(data->_work, work); }
void fn_8030F6C8(beModelCtrlInfoWork *work, beModelCtrlInfoAI *ai) { setRef(work->_aI, ai); }
void fn_8030F738(igNode *node, igVolume *bound) { setRef(node->_bound, bound); }
void fn_8030F7A8(beModelCtrlInfoWork *work, igAABox *box) { setRef(work->_baseAABox, box); }

igStringRef *fn_8030F818(igStringRef *ref, const char *text)
{
    *ref = text;
    return ref;
}

beBaseInfoData *fn_8030F8CC(beBaseInfoRam *ram, const char *name)
{
    ensureDataList(ram);
    return static_cast<beBaseInfoData *>(fn_800695CC(ram->_dataList, nameField(), name));
}

}
