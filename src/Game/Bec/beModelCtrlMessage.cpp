// beModelCtrl: the message handler (0x8030D910..0x8030EFDC).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// The model controller's messages (MsgAction), for a RAM. The subclass sees each message first; anything that is
// not a message (and GENERATE_NDSP) is a sequence name to play: SQ_ERAS ends the model, SQ_ERAS2 hides it, and any
// other sequence restarts the model's commands.
bool beModelCtrl_virtual8C(beModelCtrl *self, beBaseInfoRam *ram, const char *message)
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
        // A bullet against the model's hit boxes: int 0, the matrix, info name (string 0) and int 1 (with string
        // 0, a model RAM; the meanings of the ints are hypotheses: nothing found sends CHKBULLET). An invincible
        // model is only hit when it and the sender's name both start with 'p' and it has HP. A hit runs the "hit" script with the bullet's
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

}
