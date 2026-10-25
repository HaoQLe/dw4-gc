// beModelCtrl: the AI, the control state, ACTION commands and riding (0x803084B4..0x80309674).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// The base class's empty or trivial virtuals.
void beModelCtrl_virtual9C(beModelCtrl *, beBaseInfoRam *) {}             // 0x9C: after a RAM starts

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
// within its area: it pitches (X, from the height over the horizontal distance) every frame in states 0 to
// 3, and turns around Y after the first timer, then every second-frame period, up to the limit count.
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

// A CTRL command: onWalk, toWalk, toWait and isLive set the control state (1 to 4); onFall and noFall
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
void beModelCtrl_virtualA0(beModelCtrl *self, beBaseInfoRam *ram)
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

// An ACTION command: sent to the ACTION manager for this RAM.
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

}
