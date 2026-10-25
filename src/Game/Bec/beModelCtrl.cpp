// beModelCtrl: taking model infos, starting model RAMs, and the AI's choices (0x803082A4..0x80308FF4).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
extern int __float_nan[];
double atan2(double y, double x);

// Timers of a RAM, by name (beBaseInfoRam's timer data).
void fn_8031DE44(beBaseInfoRam *ram, const char *name, unsigned long long nanoseconds);   // starts a timer
bool fn_8031E238(beBaseInfoRam *ram, const char *name);                                 // whether a timer has run out

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
            fn_8030C85C(self, info, ram, work, 0);
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
        virtuals(self)->playSequence(ram, work->_keyEventName);
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
                if (strcmp(work->_seqCodeName, mc.SQ_SLEP) != 0) virtuals(self)->playSequence(ram, mc.SQ_FALL);
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
    fn_8030C85C(self, info, ram, work, 0);
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
void fn_8030B6EC(beModelCtrl *self, beBaseInfoRam *ram, const char *script, const char *kind, const char *infoName, int a, int b, int c, int d, int e)
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

bool fn_8030BCB0() { return true; }

}
